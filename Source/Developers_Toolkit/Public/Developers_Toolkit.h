// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Widgets/Input/SCheckBox.h"
#include "ILauncherWorker.h"
#include "ILauncherDeviceGroup.h"
#include "UObject/UnrealType.h"


class FToolBarBuilder;
class FMenuBuilder;


class FDevelopers_ToolkitModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void Ticking(bool simulate);

	void OnEngPlay(bool simulate);

	void OnDeviceAdded(const ILauncherDeviceGroupRef & devref, const FString &Name);

	void LoadDataFromConfigFile();

	static void OnConfigLineRead(const TCHAR* Key, const TCHAR* Value);
	
	void PluginButtonClicked();

	void OnCheckboxStateChanged(ECheckBoxState NewState);

	//Properties maps
	TMap<FName, bool> BoolProperties;
	TMap<FName, float> FloatProperties;
	TMap<FName, int> IntProperties;
	TMap<FName, FString> StringProperties;

	bool PlayingDevMode = false;
	
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

	TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);

	
private:
	TSharedPtr<class FUICommandList> PluginCommands;
};

