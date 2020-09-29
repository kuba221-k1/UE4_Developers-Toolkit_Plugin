#include "DevMode_API_BPLibrary.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Engine/Engine.h"
#include "CoreMinimal.h"
#include "Misc/ConfigCacheIni.h"
#include "UObject/UnrealType.h"
#include "Settings/LevelEditorPlaySettings.h"
#include "Developers_Toolkit.h"
#include "Modules/ModuleManager.h"
#include "DevMode_API.h"


UDevMode_API_BPLibrary::UDevMode_API_BPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

FDevelopers_ToolkitModule* UDevMode_API_BPLibrary::GetDevModeModule()
{
	TMap<FString, bool> mapa;
	FString stryng = "Developers_Toolkit";
	FName nazwa = FName(*stryng);
	IModuleInterface* jakis = FModuleManager::Get().GetModule(nazwa);
	FDevelopers_ToolkitModule* ja = (FDevelopers_ToolkitModule*)jakis;
	return ja;
}


bool UDevMode_API_BPLibrary::InDevMode()
{
	if (GetDevModeModule()) {
		return GetDevModeModule()->PlayingDevMode;
	}
	return false;
}


//Getters for Properties
bool UDevMode_API_BPLibrary::GetBoolPropertyValueFromDevelopmentModule(FName PropertyName, bool &Found)
{	
	if (GetDevModeModule()->BoolProperties.Contains(PropertyName)) {
		bool returnvalue = GetDevModeModule()->BoolProperties.FindChecked(PropertyName);
		Found = true;
		return returnvalue;
	}
	else {
		Found = false;
		return false;
	}
	
}

TMap<FName, bool> UDevMode_API_BPLibrary::GetBoolPropertiesFromDevelopmentModule()
{
	if (GetDevModeModule()) {
		return GetDevModeModule()->BoolProperties;
	}
	else {
		TMap<FName, bool> EmptyTMap;
		return EmptyTMap;
	}

}

int UDevMode_API_BPLibrary::GetIntPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound)
{
	if (GetDevModeModule()->IntProperties.Contains(PropertyName)) {
		int returnvalue = GetDevModeModule()->IntProperties.FindChecked(PropertyName);
		PropertyFound = true;
		return returnvalue;
	}
	else {
		PropertyFound = false;
		return 0;
	}
}

TMap<FName, int> UDevMode_API_BPLibrary::GetIntPropertiesFromDevelopmentModule()
{
	if (GetDevModeModule()) {
		return GetDevModeModule()->IntProperties;
	}
	else {
		TMap<FName, int> EmptyTMap;
		return EmptyTMap;
	}

}

float UDevMode_API_BPLibrary::GetFloatPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound)
{
	if (GetDevModeModule()->FloatProperties.Contains(PropertyName)) {
		float returnvalue = GetDevModeModule()->FloatProperties.FindChecked(PropertyName);
		PropertyFound = true;
		return returnvalue;
	}
	else {
		PropertyFound = false;
		return 0.0f;
	}
}

TMap<FName, float> UDevMode_API_BPLibrary::GetFloatPropertiesFromDevelopmentModule()
{
	if (GetDevModeModule()) {
		return GetDevModeModule()->FloatProperties;
	}
	else {
		TMap<FName, float> EmptyTMap;
		return EmptyTMap;
	}

}

FString UDevMode_API_BPLibrary::GetStringPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound)
{
	if (GetDevModeModule()->StringProperties.Contains(PropertyName)) {
		FString returnvalue = GetDevModeModule()->StringProperties.FindChecked(PropertyName);
		PropertyFound = true;
		return returnvalue;
	}
	else {
		PropertyFound = false;
		return "";
	}
}

TMap<FName, FString> UDevMode_API_BPLibrary::GetStringPropertiesFromDevelopmentModule()
{
	if (GetDevModeModule()) {
		return GetDevModeModule()->StringProperties;
	}
	else {
		TMap<FName, FString> EmptyTMap;
		return EmptyTMap;
	}

}


//Adders for Properties
void UDevMode_API_BPLibrary::AddBoolPropertyValueToDevelopmentModule(FName PropertyName, bool Value)
{
	GetDevModeModule()->BoolProperties.Add(PropertyName, Value);
	FString PropertyNameAsString = "b_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->SetBool(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, Value, GEditorPerProjectIni);
}

void UDevMode_API_BPLibrary::AddIntPropertyValueToDevelopmentModule(FName PropertyName, int Value)
{
	GetDevModeModule()->IntProperties.Add(PropertyName, Value);
	FString PropertyNameAsString = "i_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->SetInt(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, Value, GEditorPerProjectIni);

}

void UDevMode_API_BPLibrary::AddFloatPropertyValueToDevelopmentModule(FName PropertyName, float Value)
{
	GetDevModeModule()->FloatProperties.Add(PropertyName, Value);
	FString PropertyNameAsString = "f_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->SetFloat(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, Value, GEditorPerProjectIni);

}

void UDevMode_API_BPLibrary::AddStringPropertyValueToDevelopmentModule(FName PropertyName, FString Value)
{
	GetDevModeModule()->StringProperties.Add(PropertyName, Value);
	FString PropertyNameAsString = "s_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	const	TCHAR* PropertyValueAsTCHAR = *Value;
	GConfig->SetString(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, PropertyValueAsTCHAR, GEditorPerProjectIni);

}

void UDevMode_API_BPLibrary::RemoveBoolPropertyValueFromDevelopmentModule(FName PropertyName)
{
	GetDevModeModule()->BoolProperties.FindAndRemoveChecked(PropertyName);
	FString PropertyNameAsString = "b_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->RemoveKey(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, GEditorPerProjectIni);
}

void UDevMode_API_BPLibrary::RemoveIntPropertyValueFromDevelopmentModule(FName PropertyName)
{
	GetDevModeModule()->IntProperties.FindAndRemoveChecked(PropertyName);
	FString PropertyNameAsString = "i_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->RemoveKey(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, GEditorPerProjectIni);
}

void UDevMode_API_BPLibrary::RemoveFloatPropertyValueFromDevelopmentModule(FName PropertyName)
{
	GetDevModeModule()->FloatProperties.FindAndRemoveChecked(PropertyName);
	FString PropertyNameAsString = "f_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->RemoveKey(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, GEditorPerProjectIni);
}

void UDevMode_API_BPLibrary::RemoveStringPropertyValueFromDevelopmentModule(FName PropertyName)
{
	GetDevModeModule()->StringProperties.FindAndRemoveChecked(PropertyName);
	FString PropertyNameAsString = "s_" + PropertyName.ToString();
	const	TCHAR* PropertyNameAsTCHAR = *PropertyNameAsString;
	GConfig->RemoveKey(TEXT("Developer's Toolkit Plugin"), PropertyNameAsTCHAR, GEditorPerProjectIni);
}

void UDevMode_API_BPLibrary::RemoveAllPropertiesFromDevelopmentModule()
{
	TArray<FName> Keys;

	//Removing all Bool properties
	TMap<FName, bool> BoolProperties = UDevMode_API_BPLibrary::GetBoolPropertiesFromDevelopmentModule();
	BoolProperties.GenerateKeyArray(Keys);
	for (int i = 0; i < Keys.Num(); i++) {
		RemoveBoolPropertyValueFromDevelopmentModule(Keys[i]);
	}

	//Removing all Int properties
	TMap<FName, int> IntProperties = UDevMode_API_BPLibrary::GetIntPropertiesFromDevelopmentModule();
	IntProperties.GenerateKeyArray(Keys);
	for (int i = 0; i < Keys.Num(); i++) {
		RemoveIntPropertyValueFromDevelopmentModule(Keys[i]);
	}

	//Removing all Float properties
	TMap<FName, float> FloatProperties = UDevMode_API_BPLibrary::GetFloatPropertiesFromDevelopmentModule();
	FloatProperties.GenerateKeyArray(Keys);
	for (int i = 0; i < Keys.Num(); i++) {
		RemoveFloatPropertyValueFromDevelopmentModule(Keys[i]);
	}

	//Removing all String properties
	TMap<FName, FString> StringProperties = UDevMode_API_BPLibrary::GetStringPropertiesFromDevelopmentModule();
	StringProperties.GenerateKeyArray(Keys);
	for (int i = 0; i < Keys.Num(); i++) {
		RemoveStringPropertyValueFromDevelopmentModule(Keys[i]);
	}

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("All properties from Developer's Toolkit have been removed!"));
}


