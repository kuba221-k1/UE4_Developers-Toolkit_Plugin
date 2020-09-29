#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Developers_Toolkit.h"
#include "DevMode_API_BPLibrary.generated.h"




UCLASS()
class UDevMode_API_BPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	static FDevelopers_ToolkitModule* GetDevModeModule();

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "In Dev Mode", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit")
		static bool InDevMode();

	

	/*
	Gets bool value for a specific property name.
	Values are stored in a module, so
	*/
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Bool property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static bool GetBoolPropertyValueFromDevelopmentModule(FName PropertyName, bool &Found);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Bool properties from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static TMap<FName, bool> GetBoolPropertiesFromDevelopmentModule();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Bool property value to Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void AddBoolPropertyValueToDevelopmentModule(FName PropertyName, bool Value);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Bool property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void RemoveBoolPropertyValueFromDevelopmentModule(FName PropertyName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static int GetIntPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Int properties from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static TMap<FName, int> GetIntPropertiesFromDevelopmentModule();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Int property value to Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void AddIntPropertyValueToDevelopmentModule(FName PropertyName, int Value);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Int property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void RemoveIntPropertyValueFromDevelopmentModule(FName PropertyName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static float GetFloatPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get Float properties from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static TMap<FName, float> GetFloatPropertiesFromDevelopmentModule();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add Float property value to Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void AddFloatPropertyValueToDevelopmentModule(FName PropertyName, float Value);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove Float property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void RemoveFloatPropertyValueFromDevelopmentModule(FName PropertyName);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get String property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static FString GetStringPropertyValueFromDevelopmentModule(FName PropertyName, bool& PropertyFound);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Get String properties from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static TMap<FName, FString> GetStringPropertiesFromDevelopmentModule();
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Add String property value to Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void AddStringPropertyValueToDevelopmentModule(FName PropertyName, FString Value);
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove String property value from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void RemoveStringPropertyValueFromDevelopmentModule(FName PropertyName);


	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Remove All properties from Development Module", Keywords = "development mode", DevelopmentOnly), Category = "Developer's Toolkit|Properties")
		static void RemoveAllPropertiesFromDevelopmentModule();
};
