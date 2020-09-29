// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Developers_Toolkit.h"
#include "Developers_ToolkitStyle.h"
#include "Developers_ToolkitCommands.h"
#include "LevelEditor.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Docking/SDockTab.h"
#include "Editor/EditorEngine.h"

#include "ITargetDeviceServicesModule.h"
#include "ITargetDeviceProxy.h"
#include "Interfaces/TargetDeviceId.h"

#include "Settings/LevelEditorPlaySettings.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "IDetailCustomization.h"
#include "DetailLayoutBuilder.h"
#include "IDeviceManagerModule.h"
#include "Misc/ConfigCacheIni.h"
#include "Widgets/Layout/SBox.h"
#include "ILauncherWorker.h"
#include "ILauncherServicesModule.h"
#include "ILauncherDeviceGroup.h"
#include "PropertyCustomizationHelpers.h"
#include "PropertyEditorModule.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"

static const FName Developers_ToolkitTabName("Developers_Toolkit");

#define LOCTEXT_NAMESPACE "FDevelopers_ToolkitModule"

void FDevelopers_ToolkitModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FDevelopers_ToolkitStyle::Initialize();
	FDevelopers_ToolkitStyle::ReloadTextures();

	FDevelopers_ToolkitCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FDevelopers_ToolkitCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FDevelopers_ToolkitModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FDevelopers_ToolkitModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	

	{
		TSharedPtr<FExtender> ToolbarExtender2 = MakeShareable(new FExtender);
		ToolbarExtender2->AddToolBarExtension("Game", EExtensionHook::Position::First, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FDevelopers_ToolkitModule::AddToolbarExtension));
	
		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender2);
	}
	
	FGlobalTabmanager::Get()->RegisterNomadTabSpawner(Developers_ToolkitTabName, FOnSpawnTab::CreateRaw(this, &FDevelopers_ToolkitModule::OnSpawnPluginTab))
		.SetDisplayName(LOCTEXT("FDevelopers_ToolkitTabTitle", "Developer's Toolkit"))
		.SetMenuType(ETabSpawnerMenuType::Hidden);

	LoadDataFromConfigFile();
	FDelegateHandle StartPIEdelegate = FEditorDelegates::PostPIEStarted.AddRaw(this, &FDevelopers_ToolkitModule::Ticking);
	FDelegateHandle EndPIEdelegate = FEditorDelegates::EndPIE.AddRaw(this, &FDevelopers_ToolkitModule::OnEngPlay);

}

void FDevelopers_ToolkitModule::Ticking(bool simulate) {
	FDevelopers_ToolkitStyle::Initialize();
	return;
}

void FDevelopers_ToolkitModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FDevelopers_ToolkitStyle::Shutdown();

	FDevelopers_ToolkitCommands::Unregister();

	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(Developers_ToolkitTabName);
}

TSharedRef<SDockTab> FDevelopers_ToolkitModule::OnSpawnPluginTab(const FSpawnTabArgs& SpawnTabArgs)
{
	FText WidgetText = FText::FromString(TEXT("TEXT"));


	TSharedPtr<IPropertyHandle> ActorClassHandle;
	//IDetailLayoutBuilder::
	//GetProperty(GET_MEMBER_NAME_CHECKED(FtasModule, ActorClass));

	return SNew(SDockTab).TabRole(ETabRole::NomadTab)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.Padding(3.0f, 1.0f)
			[
				
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.Padding(2.0f)
				[
					SNew(SCheckBox).OnCheckStateChanged_Raw(this, &FDevelopers_ToolkitModule::OnCheckboxStateChanged)
				]
				

				/*
				+ SHorizontalBox::Slot()
				.Padding(2.0f)
				[
					SNew(SProperty, ActorClassHandle).CustomWidget()
					[
						SNew(SCheckBox).OnCheckStateChanged_Raw(this, &FtasModule::pupcia)
					]
				]
				*/
			]
		];
}


void FDevelopers_ToolkitModule::OnEngPlay(bool simulate) {
	PlayingDevMode = false;
}

void FDevelopers_ToolkitModule::OnDeviceAdded(const ILauncherDeviceGroupRef & devref, const FString &Name) {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Name);
}

void FDevelopers_ToolkitModule::OnCheckboxStateChanged(ECheckBoxState NewState) {
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
	
	return;
}

#define IMAGE_BRUSH( RelativePath, ... ) FSlateImageBrush( Style->RootToContentDir( RelativePath, TEXT(".png") ), __VA_ARGS__ )

void FDevelopers_ToolkitModule::PluginButtonClicked()
{
	PlayingDevMode = true;
	const ULevelEditorPlaySettings* PlayInSettings = GetDefault<ULevelEditorPlaySettings>();
	bool PlayInVR = PlayInSettings->LastExecutedPlayModeType == EPlayModeType::PlayMode_InVR;
	bool StartAtPlayerStart = (PlayInSettings->LastExecutedPlayModeLocation == EPlayModeLocations::PlayLocation_DefaultPlayerStart);
	GEditor->RequestPlaySession(StartAtPlayerStart, NULL, false, (const FVector*)0, (const FRotator*)0, -1, false, PlayInVR, false);

 
	/*
 // shared devices section
	TArray<TSharedPtr<ITargetDeviceProxy>> DeviceProxies;
	ITargetDeviceServicesModule* TargetDeviceServicesModule = static_cast<ITargetDeviceServicesModule*>(FModuleManager::Get().LoadModule(TEXT("TargetDeviceServices")));
	//TargetDeviceServicesModule->GetDeviceServiceManager()->GetServices()
	TargetDeviceServicesModule->GetDeviceProxyManager()->GetAllProxies(TEXT("Android"), DeviceProxies);
	// for each proxy...
	for (auto DeviceProxyIt = DeviceProxies.CreateIterator(); DeviceProxyIt; ++DeviceProxyIt)
	{
		TSharedPtr<ITargetDeviceProxy> DeviceProxy = *DeviceProxyIt;
		if (DeviceProxy)
		{
			FString QuestName = DeviceProxy->GetName();
			
			if (GEngine && QuestName.Contains("Quest")) {
				const FString Name = DeviceProxy->GetName();
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, Name);
				
				const FString DeviceID = DeviceProxy->GetTargetDeviceId(NAME_None);
				GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, DeviceID);
				//DeviceProxy->DevW
				FTargetDeviceId TargetDeviceId;
				if (FTargetDeviceId::Parse(DeviceID, TargetDeviceId)) {
					GEditor->CancelPlayingViaLauncher();
					GEditor->RequestPlaySession(DeviceID, Name);
				}
			}
		}
	}
	*/
	
}
#undef IMAGE_BRUSH

void FDevelopers_ToolkitModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FDevelopers_ToolkitCommands::Get().OpenPluginWindow);
	
}

void FDevelopers_ToolkitModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FDevelopers_ToolkitCommands::Get().OpenPluginWindow);
}

void FDevelopers_ToolkitModule::OnConfigLineRead(const TCHAR* Key, const TCHAR* Value)
{
	//Gettignreference to the Instance of this module.
	//It has to be dobe because this function is static.
	FString ModuleName = "Developers_Toolkit";
	FName nazwa = FName(*ModuleName);
	IModuleInterface* jakis = FModuleManager::Get().GetModule(nazwa);
	FDevelopers_ToolkitModule* ja = (FDevelopers_ToolkitModule*)jakis;

	//Getting only the name of the property.
	//(Removing "b_" part of the property name in config file)
	FString KeyAsString = Key;
	KeyAsString = KeyAsString.RightChop(2);
	const FString ValueAsString = Value;
	
	const CHAR znak = Key[0];
	if(Key[0] == 'b'){
		bool ReadValue = ValueAsString.ToBool();
		ja->BoolProperties.Add(FName(*KeyAsString), ReadValue);
	}
	else if (Key[0] == 'i') {
		const int ReadValue = FCString::Atoi(Value);
		ja->IntProperties.Add(FName(*KeyAsString), ReadValue);
	}
	else if (Key[0] == 'f') {
		const float ReadValue = FCString::Atof(Value);
		ja->FloatProperties.Add(FName(*KeyAsString), ReadValue);
	}
	else if (Key[0] == 's') {
		const float ReadValue = FCString::Atof(Value);
		ja->StringProperties.Add(FName(*KeyAsString), ValueAsString);
	}
}

void FDevelopers_ToolkitModule::LoadDataFromConfigFile()
{
	FString SectionAsString = "Developer's Toolkit Plugin";
	const	TCHAR* SectionAsTCHAR = *SectionAsString;
	const FString filename = GEditorPerProjectIni;
	GConfig->ForEachEntry(FKeyValueSink::CreateStatic(&FDevelopers_ToolkitModule::OnConfigLineRead), SectionAsTCHAR, filename);
}



#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDevelopers_ToolkitModule, Developers_Toolkit)