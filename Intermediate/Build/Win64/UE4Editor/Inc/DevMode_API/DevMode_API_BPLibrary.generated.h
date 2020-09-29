// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef DEVMODE_API_DevMode_API_BPLibrary_generated_h
#error "DevMode_API_BPLibrary.generated.h already included, missing '#pragma once' in DevMode_API_BPLibrary.h"
#endif
#define DEVMODE_API_DevMode_API_BPLibrary_generated_h

#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_SPARSE_DATA
#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveAllPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveAllPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStringPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveStringPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStringPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddStringPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UDevMode_API_BPLibrary::GetStringPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UDevMode_API_BPLibrary::GetStringPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFloatPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveFloatPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddFloatPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,float>*)Z_Param__Result=UDevMode_API_BPLibrary::GetFloatPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UDevMode_API_BPLibrary::GetFloatPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIntPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveIntPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddIntPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddIntPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,int32>*)Z_Param__Result=UDevMode_API_BPLibrary::GetIntPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UDevMode_API_BPLibrary::GetIntPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBoolPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveBoolPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoolPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddBoolPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,bool>*)Z_Param__Result=UDevMode_API_BPLibrary::GetBoolPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDevMode_API_BPLibrary::GetBoolPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_Found); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInDevMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDevMode_API_BPLibrary::InDevMode(); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveAllPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveAllPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveStringPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveStringPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddStringPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddStringPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,FString>*)Z_Param__Result=UDevMode_API_BPLibrary::GetStringPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStringPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UDevMode_API_BPLibrary::GetStringPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveFloatPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveFloatPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddFloatPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddFloatPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,float>*)Z_Param__Result=UDevMode_API_BPLibrary::GetFloatPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFloatPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UDevMode_API_BPLibrary::GetFloatPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIntPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveIntPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddIntPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddIntPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,int32>*)Z_Param__Result=UDevMode_API_BPLibrary::GetIntPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIntPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_PropertyFound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UDevMode_API_BPLibrary::GetIntPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_PropertyFound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBoolPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::RemoveBoolPropertyValueFromDevelopmentModule(Z_Param_PropertyName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBoolPropertyValueToDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UDevMode_API_BPLibrary::AddBoolPropertyValueToDevelopmentModule(Z_Param_PropertyName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolPropertiesFromDevelopmentModule) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<FName,bool>*)Z_Param__Result=UDevMode_API_BPLibrary::GetBoolPropertiesFromDevelopmentModule(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoolPropertyValueFromDevelopmentModule) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_PropertyName); \
		P_GET_UBOOL_REF(Z_Param_Out_Found); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDevMode_API_BPLibrary::GetBoolPropertyValueFromDevelopmentModule(Z_Param_PropertyName,Z_Param_Out_Found); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInDevMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UDevMode_API_BPLibrary::InDevMode(); \
		P_NATIVE_END; \
	}


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDevMode_API_BPLibrary(); \
	friend struct Z_Construct_UClass_UDevMode_API_BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDevMode_API_BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DevMode_API"), NO_API) \
	DECLARE_SERIALIZER(UDevMode_API_BPLibrary)


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDevMode_API_BPLibrary(); \
	friend struct Z_Construct_UClass_UDevMode_API_BPLibrary_Statics; \
public: \
	DECLARE_CLASS(UDevMode_API_BPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DevMode_API"), NO_API) \
	DECLARE_SERIALIZER(UDevMode_API_BPLibrary)


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevMode_API_BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevMode_API_BPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevMode_API_BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevMode_API_BPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevMode_API_BPLibrary(UDevMode_API_BPLibrary&&); \
	NO_API UDevMode_API_BPLibrary(const UDevMode_API_BPLibrary&); \
public:


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDevMode_API_BPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDevMode_API_BPLibrary(UDevMode_API_BPLibrary&&); \
	NO_API UDevMode_API_BPLibrary(const UDevMode_API_BPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDevMode_API_BPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDevMode_API_BPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDevMode_API_BPLibrary)


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_10_PROLOG
#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_SPARSE_DATA \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_RPC_WRAPPERS \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_INCLASS \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_SPARSE_DATA \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DevMode_API_BPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVMODE_API_API UClass* StaticClass<class UDevMode_API_BPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_Developers_Toolkit_Source_DevMode_API_Public_DevMode_API_BPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
