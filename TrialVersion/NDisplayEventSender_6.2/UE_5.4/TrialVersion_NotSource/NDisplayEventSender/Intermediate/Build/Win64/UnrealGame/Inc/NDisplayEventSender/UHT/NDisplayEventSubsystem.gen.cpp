// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDisplayEventSender/Private/NDisplayEventSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDisplayEventSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_ANDisplayEventManager_NoRegister();
NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UNDisplayEventSubsystem();
NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UNDisplayEventSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDisplayEventSender();
// End Cross Module References

// Begin Class UNDisplayEventSubsystem Function GetMultiEventManager
struct Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics
{
	struct NDisplayEventSubsystem_eventGetMultiEventManager_Parms
	{
		ANDisplayEventManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NDisplayEventSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NDisplayEventSubsystem_eventGetMultiEventManager_Parms, ReturnValue), Z_Construct_UClass_ANDisplayEventManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDisplayEventSubsystem, nullptr, "GetMultiEventManager", nullptr, nullptr, Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NDisplayEventSubsystem_eventGetMultiEventManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NDisplayEventSubsystem_eventGetMultiEventManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNDisplayEventSubsystem::execGetMultiEventManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ANDisplayEventManager**)Z_Param__Result=P_THIS->GetMultiEventManager();
	P_NATIVE_END;
}
// End Class UNDisplayEventSubsystem Function GetMultiEventManager

// Begin Class UNDisplayEventSubsystem
void UNDisplayEventSubsystem::StaticRegisterNativesUNDisplayEventSubsystem()
{
	UClass* Class = UNDisplayEventSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMultiEventManager", &UNDisplayEventSubsystem::execGetMultiEventManager },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDisplayEventSubsystem);
UClass* Z_Construct_UClass_UNDisplayEventSubsystem_NoRegister()
{
	return UNDisplayEventSubsystem::StaticClass();
}
struct Z_Construct_UClass_UNDisplayEventSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NDisplayEventSubsystem.h" },
		{ "ModuleRelativePath", "Private/NDisplayEventSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager, "GetMultiEventManager" }, // 753839803
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDisplayEventSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNDisplayEventSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSender,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNDisplayEventSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDisplayEventSubsystem_Statics::ClassParams = {
	&UNDisplayEventSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNDisplayEventSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UNDisplayEventSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNDisplayEventSubsystem()
{
	if (!Z_Registration_Info_UClass_UNDisplayEventSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDisplayEventSubsystem.OuterSingleton, Z_Construct_UClass_UNDisplayEventSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNDisplayEventSubsystem.OuterSingleton;
}
template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<UNDisplayEventSubsystem>()
{
	return UNDisplayEventSubsystem::StaticClass();
}
UNDisplayEventSubsystem::UNDisplayEventSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNDisplayEventSubsystem);
UNDisplayEventSubsystem::~UNDisplayEventSubsystem() {}
// End Class UNDisplayEventSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Private_NDisplayEventSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNDisplayEventSubsystem, UNDisplayEventSubsystem::StaticClass, TEXT("UNDisplayEventSubsystem"), &Z_Registration_Info_UClass_UNDisplayEventSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDisplayEventSubsystem), 2033832581U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Private_NDisplayEventSubsystem_h_1839164592(TEXT("/Script/NDisplayEventSender"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Private_NDisplayEventSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Private_NDisplayEventSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
