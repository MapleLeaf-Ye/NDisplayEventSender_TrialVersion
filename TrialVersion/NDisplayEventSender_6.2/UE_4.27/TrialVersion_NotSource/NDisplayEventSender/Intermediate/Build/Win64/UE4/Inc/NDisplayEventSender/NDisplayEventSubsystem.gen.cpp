// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDisplayEventSender/Private/NDisplayEventSubsystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDisplayEventSubsystem() {}
// Cross Module References
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UNDisplayEventSubsystem_NoRegister();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UNDisplayEventSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_NDisplayEventSender();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_ANDisplayEventManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNDisplayEventSubsystem::execGetMultiEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ANDisplayEventManager**)Z_Param__Result=P_THIS->GetMultiEventManager();
		P_NATIVE_END;
	}
	void UNDisplayEventSubsystem::StaticRegisterNativesUNDisplayEventSubsystem()
	{
		UClass* Class = UNDisplayEventSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMultiEventManager", &UNDisplayEventSubsystem::execGetMultiEventManager },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics
	{
		struct NDisplayEventSubsystem_eventGetMultiEventManager_Parms
		{
			ANDisplayEventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventSubsystem_eventGetMultiEventManager_Parms, ReturnValue), Z_Construct_UClass_ANDisplayEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NDisplayEventSubsystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNDisplayEventSubsystem, nullptr, "GetMultiEventManager", nullptr, nullptr, sizeof(NDisplayEventSubsystem_eventGetMultiEventManager_Parms), Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNDisplayEventSubsystem_NoRegister()
	{
		return UNDisplayEventSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UNDisplayEventSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDisplayEventSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSender,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNDisplayEventSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNDisplayEventSubsystem_GetMultiEventManager, "GetMultiEventManager" }, // 2499607861
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDisplayEventSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NDisplayEventSubsystem.h" },
		{ "ModuleRelativePath", "Private/NDisplayEventSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDisplayEventSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDisplayEventSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNDisplayEventSubsystem_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UNDisplayEventSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDisplayEventSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDisplayEventSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNDisplayEventSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNDisplayEventSubsystem, 1519329732);
	template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<UNDisplayEventSubsystem>()
	{
		return UNDisplayEventSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNDisplayEventSubsystem(Z_Construct_UClass_UNDisplayEventSubsystem, &UNDisplayEventSubsystem::StaticClass, TEXT("/Script/NDisplayEventSender"), TEXT("UNDisplayEventSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDisplayEventSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
