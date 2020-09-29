// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevMode_API/Public/DevMode_API_BPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevMode_API_BPLibrary() {}
// Cross Module References
	DEVMODE_API_API UClass* Z_Construct_UClass_UDevMode_API_BPLibrary_NoRegister();
	DEVMODE_API_API UClass* Z_Construct_UClass_UDevMode_API_BPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DevMode_API();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule();
	DEVMODE_API_API UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule();
// End Cross Module References
	void UDevMode_API_BPLibrary::StaticRegisterNativesUDevMode_API_BPLibrary()
	{
		UClass* Class = UDevMode_API_BPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoolPropertyValueToDevelopmentModule", &UDevMode_API_BPLibrary::execAddBoolPropertyValueToDevelopmentModule },
			{ "AddFloatPropertyValueToDevelopmentModule", &UDevMode_API_BPLibrary::execAddFloatPropertyValueToDevelopmentModule },
			{ "AddIntPropertyValueToDevelopmentModule", &UDevMode_API_BPLibrary::execAddIntPropertyValueToDevelopmentModule },
			{ "AddStringPropertyValueToDevelopmentModule", &UDevMode_API_BPLibrary::execAddStringPropertyValueToDevelopmentModule },
			{ "GetBoolPropertiesFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetBoolPropertiesFromDevelopmentModule },
			{ "GetBoolPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetBoolPropertyValueFromDevelopmentModule },
			{ "GetFloatPropertiesFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetFloatPropertiesFromDevelopmentModule },
			{ "GetFloatPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetFloatPropertyValueFromDevelopmentModule },
			{ "GetIntPropertiesFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetIntPropertiesFromDevelopmentModule },
			{ "GetIntPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetIntPropertyValueFromDevelopmentModule },
			{ "GetStringPropertiesFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetStringPropertiesFromDevelopmentModule },
			{ "GetStringPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execGetStringPropertyValueFromDevelopmentModule },
			{ "InDevMode", &UDevMode_API_BPLibrary::execInDevMode },
			{ "RemoveAllPropertiesFromDevelopmentModule", &UDevMode_API_BPLibrary::execRemoveAllPropertiesFromDevelopmentModule },
			{ "RemoveBoolPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execRemoveBoolPropertyValueFromDevelopmentModule },
			{ "RemoveFloatPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execRemoveFloatPropertyValueFromDevelopmentModule },
			{ "RemoveIntPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execRemoveIntPropertyValueFromDevelopmentModule },
			{ "RemoveStringPropertyValueFromDevelopmentModule", &UDevMode_API_BPLibrary::execRemoveStringPropertyValueFromDevelopmentModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventAddBoolPropertyValueToDevelopmentModule_Parms
		{
			FName PropertyName;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventAddBoolPropertyValueToDevelopmentModule_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventAddBoolPropertyValueToDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddBoolPropertyValueToDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Add Bool property value to Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "AddBoolPropertyValueToDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventAddBoolPropertyValueToDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventAddFloatPropertyValueToDevelopmentModule_Parms
		{
			FName PropertyName;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddFloatPropertyValueToDevelopmentModule_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddFloatPropertyValueToDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Add Float property value to Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "AddFloatPropertyValueToDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventAddFloatPropertyValueToDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventAddIntPropertyValueToDevelopmentModule_Parms
		{
			FName PropertyName;
			int32 Value;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddIntPropertyValueToDevelopmentModule_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddIntPropertyValueToDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Add Int property value to Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "AddIntPropertyValueToDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventAddIntPropertyValueToDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventAddStringPropertyValueToDevelopmentModule_Parms
		{
			FName PropertyName;
			FString Value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddStringPropertyValueToDevelopmentModule_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventAddStringPropertyValueToDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Add String property value to Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "AddStringPropertyValueToDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventAddStringPropertyValueToDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetBoolPropertiesFromDevelopmentModule_Parms
		{
			TMap<FName,bool> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetBoolPropertiesFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Bool properties from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetBoolPropertiesFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetBoolPropertiesFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
			bool Found;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_Found_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Found;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_Found_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms*)Obj)->Found = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_Found = { "Found", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_Found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_Found,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "Comment", "/*\n\x09Gets bool value for a specific property name.\n\x09Values are stored in a module, so\n\x09*/" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Bool property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
		{ "ToolTip", "Gets bool value for a specific property name.\nValues are stored in a module, so" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetBoolPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetBoolPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetFloatPropertiesFromDevelopmentModule_Parms
		{
			TMap<FName,float> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetFloatPropertiesFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Float properties from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetFloatPropertiesFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetFloatPropertiesFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
			bool PropertyFound;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static void NewProp_PropertyFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PropertyFound;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms*)Obj)->PropertyFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound = { "PropertyFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Float property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetFloatPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetFloatPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetIntPropertiesFromDevelopmentModule_Parms
		{
			TMap<FName,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetIntPropertiesFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Int properties from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetIntPropertiesFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetIntPropertiesFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
			bool PropertyFound;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static void NewProp_PropertyFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PropertyFound;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms*)Obj)->PropertyFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound = { "PropertyFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get Int property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetIntPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetIntPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetStringPropertiesFromDevelopmentModule_Parms
		{
			TMap<FName,FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetStringPropertiesFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get String properties from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetStringPropertiesFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetStringPropertiesFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
			bool PropertyFound;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static void NewProp_PropertyFound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PropertyFound;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms*)Obj)->PropertyFound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound = { "PropertyFound", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyFound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Get String property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "GetStringPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventGetStringPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics
	{
		struct DevMode_API_BPLibrary_eventInDevMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DevMode_API_BPLibrary_eventInDevMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DevMode_API_BPLibrary_eventInDevMode_Parms), &Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "In Dev Mode" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "InDevMode", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventInDevMode_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Remove All properties from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "RemoveAllPropertiesFromDevelopmentModule", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventRemoveBoolPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventRemoveBoolPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Remove Bool property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "RemoveBoolPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventRemoveBoolPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventRemoveFloatPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventRemoveFloatPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Remove Float property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "RemoveFloatPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventRemoveFloatPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventRemoveIntPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventRemoveIntPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Remove Int property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "RemoveIntPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventRemoveIntPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics
	{
		struct DevMode_API_BPLibrary_eventRemoveStringPropertyValueFromDevelopmentModule_Parms
		{
			FName PropertyName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DevMode_API_BPLibrary_eventRemoveStringPropertyValueFromDevelopmentModule_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Developer's Toolkit|Properties" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Remove String property value from Development Module" },
		{ "Keywords", "development mode" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDevMode_API_BPLibrary, nullptr, "RemoveStringPropertyValueFromDevelopmentModule", nullptr, nullptr, sizeof(DevMode_API_BPLibrary_eventRemoveStringPropertyValueFromDevelopmentModule_Parms), Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDevMode_API_BPLibrary_NoRegister()
	{
		return UDevMode_API_BPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDevMode_API_BPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DevMode_API,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_AddBoolPropertyValueToDevelopmentModule, "AddBoolPropertyValueToDevelopmentModule" }, // 1621135321
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_AddFloatPropertyValueToDevelopmentModule, "AddFloatPropertyValueToDevelopmentModule" }, // 3464538368
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_AddIntPropertyValueToDevelopmentModule, "AddIntPropertyValueToDevelopmentModule" }, // 1031007610
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_AddStringPropertyValueToDevelopmentModule, "AddStringPropertyValueToDevelopmentModule" }, // 1282676140
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertiesFromDevelopmentModule, "GetBoolPropertiesFromDevelopmentModule" }, // 905391173
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetBoolPropertyValueFromDevelopmentModule, "GetBoolPropertyValueFromDevelopmentModule" }, // 490942723
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertiesFromDevelopmentModule, "GetFloatPropertiesFromDevelopmentModule" }, // 4212356688
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetFloatPropertyValueFromDevelopmentModule, "GetFloatPropertyValueFromDevelopmentModule" }, // 848801184
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertiesFromDevelopmentModule, "GetIntPropertiesFromDevelopmentModule" }, // 4024726382
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetIntPropertyValueFromDevelopmentModule, "GetIntPropertyValueFromDevelopmentModule" }, // 2435674310
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertiesFromDevelopmentModule, "GetStringPropertiesFromDevelopmentModule" }, // 2004259219
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_GetStringPropertyValueFromDevelopmentModule, "GetStringPropertyValueFromDevelopmentModule" }, // 2235026657
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_InDevMode, "InDevMode" }, // 456331168
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveAllPropertiesFromDevelopmentModule, "RemoveAllPropertiesFromDevelopmentModule" }, // 1280669378
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveBoolPropertyValueFromDevelopmentModule, "RemoveBoolPropertyValueFromDevelopmentModule" }, // 692182879
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveFloatPropertyValueFromDevelopmentModule, "RemoveFloatPropertyValueFromDevelopmentModule" }, // 1008299151
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveIntPropertyValueFromDevelopmentModule, "RemoveIntPropertyValueFromDevelopmentModule" }, // 3085196138
		{ &Z_Construct_UFunction_UDevMode_API_BPLibrary_RemoveStringPropertyValueFromDevelopmentModule, "RemoveStringPropertyValueFromDevelopmentModule" }, // 474976311
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DevMode_API_BPLibrary.h" },
		{ "ModuleRelativePath", "Public/DevMode_API_BPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDevMode_API_BPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::ClassParams = {
		&UDevMode_API_BPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDevMode_API_BPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDevMode_API_BPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDevMode_API_BPLibrary, 1718030195);
	template<> DEVMODE_API_API UClass* StaticClass<UDevMode_API_BPLibrary>()
	{
		return UDevMode_API_BPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDevMode_API_BPLibrary(Z_Construct_UClass_UDevMode_API_BPLibrary, &UDevMode_API_BPLibrary::StaticClass, TEXT("/Script/DevMode_API"), TEXT("UDevMode_API_BPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDevMode_API_BPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
