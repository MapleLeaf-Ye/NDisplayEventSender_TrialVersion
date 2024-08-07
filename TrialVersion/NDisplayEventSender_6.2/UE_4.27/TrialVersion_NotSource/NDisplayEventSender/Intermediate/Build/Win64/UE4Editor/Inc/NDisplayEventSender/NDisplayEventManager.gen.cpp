// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDisplayEventSender/Public/NDisplayEventManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDisplayEventManager() {}
// Cross Module References
	NDISPLAYEVENTSENDER_API UEnum* Z_Construct_UEnum_NDisplayEventSender_EExePath();
	UPackage* Z_Construct_UPackage__Script_NDisplayEventSender();
	NDISPLAYEVENTSENDER_API UScriptStruct* Z_Construct_UScriptStruct_FMultiNodeFunParam();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UMultiNodeFunParamPackager_NoRegister();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_UMultiNodeFunParamPackager();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_ANDisplayEventManager_NoRegister();
	NDISPLAYEVENTSENDER_API UClass* Z_Construct_UClass_ANDisplayEventManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EExePath_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NDisplayEventSender_EExePath, Z_Construct_UPackage__Script_NDisplayEventSender(), TEXT("EExePath"));
		}
		return Singleton;
	}
	template<> NDISPLAYEVENTSENDER_API UEnum* StaticEnum<EExePath>()
	{
		return EExePath_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExePath(EExePath_StaticEnum, TEXT("/Script/NDisplayEventSender"), TEXT("EExePath"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NDisplayEventSender_EExePath_Hash() { return 3680717539U; }
	UEnum* Z_Construct_UEnum_NDisplayEventSender_EExePath()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NDisplayEventSender();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExePath"), 0, Get_Z_Construct_UEnum_NDisplayEventSender_EExePath_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExePath::NormalExe", (int64)EExePath::NormalExe },
				{ "EExePath::MultiNodeExe", (int64)EExePath::MultiNodeExe },
				{ "EExePath::Error", (int64)EExePath::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Error.Name", "EExePath::Error" },
				{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
				{ "MultiNodeExe.Name", "EExePath::MultiNodeExe" },
				{ "NormalExe.Name", "EExePath::NormalExe" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NDisplayEventSender,
				nullptr,
				"EExePath",
				"EExePath",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMultiNodeFunParam::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NDISPLAYEVENTSENDER_API uint32 Get_Z_Construct_UScriptStruct_FMultiNodeFunParam_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiNodeFunParam, Z_Construct_UPackage__Script_NDisplayEventSender(), TEXT("MultiNodeFunParam"), sizeof(FMultiNodeFunParam), Get_Z_Construct_UScriptStruct_FMultiNodeFunParam_Hash());
	}
	return Singleton;
}
template<> NDISPLAYEVENTSENDER_API UScriptStruct* StaticStruct<FMultiNodeFunParam>()
{
	return FMultiNodeFunParam::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMultiNodeFunParam(FMultiNodeFunParam::StaticStruct, TEXT("/Script/NDisplayEventSender"), TEXT("MultiNodeFunParam"), false, nullptr, nullptr);
static struct FScriptStruct_NDisplayEventSender_StaticRegisterNativesFMultiNodeFunParam
{
	FScriptStruct_NDisplayEventSender_StaticRegisterNativesFMultiNodeFunParam()
	{
		UScriptStruct::DeferCppStructOps<FMultiNodeFunParam>(FName(TEXT("MultiNodeFunParam")));
	}
} ScriptStruct_NDisplayEventSender_StaticRegisterNativesFMultiNodeFunParam;
	struct Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUObject_MetaData[];
#endif
		static void NewProp_bIsUObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UObjectSoftPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UObjectSoftPath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FunParamData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunParamData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunParamData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiNodeFunParam>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FMultiNodeFunParam*)Obj)->bIsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiNodeFunParam), &Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject_SetBit(void* Obj)
	{
		((FMultiNodeFunParam*)Obj)->bIsUObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject = { "bIsUObject", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMultiNodeFunParam), &Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_UObjectSoftPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_UObjectSoftPath = { "UObjectSoftPath", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiNodeFunParam, UObjectSoftPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_UObjectSoftPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_UObjectSoftPath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData_Inner = { "FunParamData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData = { "FunParamData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMultiNodeFunParam, FunParamData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_bIsUObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_UObjectSoftPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::NewProp_FunParamData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSender,
		nullptr,
		&NewStructOps,
		"MultiNodeFunParam",
		sizeof(FMultiNodeFunParam),
		alignof(FMultiNodeFunParam),
		Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultiNodeFunParam()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMultiNodeFunParam_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NDisplayEventSender();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MultiNodeFunParam"), sizeof(FMultiNodeFunParam), Get_Z_Construct_UScriptStruct_FMultiNodeFunParam_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMultiNodeFunParam_Hash() { return 3128069630U; }
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execGetPackagedParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultiNodeFunParam*)Z_Param__Result=P_THIS->GetPackagedParam(Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execGetFunName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFunName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execGetFunOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFunOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execGetIsCPPEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsCPPEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execSetFuncOwnerAndFuncName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InFuncOwner);
		P_GET_PROPERTY(FStrProperty,Z_Param_InFuncName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFuncOwnerAndFuncName(Z_Param_InFuncOwner,Z_Param_InFuncName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execSetIsCPP)
	{
		P_GET_UBOOL(Z_Param_bInIsCPP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsCPP(Z_Param_bInIsCPP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execClearPackagerParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPackagerParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMultiNodeFunParamPackager::execAddNewFunParam)
	{
		P_GET_STRUCT_REF(FMultiNodeFunParam,Z_Param_Out_InParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewFunParam(Z_Param_Out_InParam);
		P_NATIVE_END;
	}
	void UMultiNodeFunParamPackager::StaticRegisterNativesUMultiNodeFunParamPackager()
	{
		UClass* Class = UMultiNodeFunParamPackager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewFunParam", &UMultiNodeFunParamPackager::execAddNewFunParam },
			{ "ClearPackagerParams", &UMultiNodeFunParamPackager::execClearPackagerParams },
			{ "GetFunName", &UMultiNodeFunParamPackager::execGetFunName },
			{ "GetFunOwner", &UMultiNodeFunParamPackager::execGetFunOwner },
			{ "GetIsCPPEvent", &UMultiNodeFunParamPackager::execGetIsCPPEvent },
			{ "GetPackagedParam", &UMultiNodeFunParamPackager::execGetPackagedParam },
			{ "SetFuncOwnerAndFuncName", &UMultiNodeFunParamPackager::execSetFuncOwnerAndFuncName },
			{ "SetIsCPP", &UMultiNodeFunParamPackager::execSetIsCPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics
	{
		struct MultiNodeFunParamPackager_eventAddNewFunParam_Parms
		{
			FMultiNodeFunParam InParam;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InParam;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::NewProp_InParam_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::NewProp_InParam = { "InParam", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventAddNewFunParam_Parms, InParam), Z_Construct_UScriptStruct_FMultiNodeFunParam, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::NewProp_InParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::NewProp_InParam_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::NewProp_InParam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "AddNewFunParam", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventAddNewFunParam_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "ClearPackagerParams", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics
	{
		struct MultiNodeFunParamPackager_eventGetFunName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventGetFunName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "GetFunName", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventGetFunName_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics
	{
		struct MultiNodeFunParamPackager_eventGetFunOwner_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventGetFunOwner_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "GetFunOwner", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventGetFunOwner_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics
	{
		struct MultiNodeFunParamPackager_eventGetIsCPPEvent_Parms
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
	void Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MultiNodeFunParamPackager_eventGetIsCPPEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiNodeFunParamPackager_eventGetIsCPPEvent_Parms), &Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "GetIsCPPEvent", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventGetIsCPPEvent_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics
	{
		struct MultiNodeFunParamPackager_eventGetPackagedParam_Parms
		{
			int32 InIndex;
			FMultiNodeFunParam ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventGetPackagedParam_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventGetPackagedParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultiNodeFunParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::NewProp_InIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "GetPackagedParam", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventGetPackagedParam_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics
	{
		struct MultiNodeFunParamPackager_eventSetFuncOwnerAndFuncName_Parms
		{
			FString InFuncOwner;
			FString InFuncName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFuncOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFuncOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InFuncName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InFuncName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncOwner_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncOwner = { "InFuncOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventSetFuncOwnerAndFuncName_Parms, InFuncOwner), METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncName = { "InFuncName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MultiNodeFunParamPackager_eventSetFuncOwnerAndFuncName_Parms, InFuncName), METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::NewProp_InFuncName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "SetFuncOwnerAndFuncName", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventSetFuncOwnerAndFuncName_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics
	{
		struct MultiNodeFunParamPackager_eventSetIsCPP_Parms
		{
			bool bInIsCPP;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInIsCPP_MetaData[];
#endif
		static void NewProp_bInIsCPP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsCPP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP_SetBit(void* Obj)
	{
		((MultiNodeFunParamPackager_eventSetIsCPP_Parms*)Obj)->bInIsCPP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP = { "bInIsCPP", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MultiNodeFunParamPackager_eventSetIsCPP_Parms), &Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::NewProp_bInIsCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMultiNodeFunParamPackager, nullptr, "SetIsCPP", nullptr, nullptr, sizeof(MultiNodeFunParamPackager_eventSetIsCPP_Parms), Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMultiNodeFunParamPackager_NoRegister()
	{
		return UMultiNodeFunParamPackager::StaticClass();
	}
	struct Z_Construct_UClass_UMultiNodeFunParamPackager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCPP_MetaData[];
#endif
		static void NewProp_bIsCPP_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCPP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PackagedParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagedParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PackagedParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSender,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_AddNewFunParam, "AddNewFunParam" }, // 708601641
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_ClearPackagerParams, "ClearPackagerParams" }, // 158146250
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunName, "GetFunName" }, // 403443577
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_GetFunOwner, "GetFunOwner" }, // 2121857329
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_GetIsCPPEvent, "GetIsCPPEvent" }, // 2595674584
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_GetPackagedParam, "GetPackagedParam" }, // 3194376922
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_SetFuncOwnerAndFuncName, "SetFuncOwnerAndFuncName" }, // 140342830
		{ &Z_Construct_UFunction_UMultiNodeFunParamPackager_SetIsCPP, "SetIsCPP" }, // 846278642
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NDisplayEventManager.h" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	void Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP_SetBit(void* Obj)
	{
		((UMultiNodeFunParamPackager*)Obj)->bIsCPP = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP = { "bIsCPP", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMultiNodeFunParamPackager), &Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunOwner = { "FunOwner", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiNodeFunParamPackager, FunOwner), METADATA_PARAMS(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunName = { "FunName", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiNodeFunParamPackager, FunName), METADATA_PARAMS(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams_Inner = { "PackagedParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMultiNodeFunParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams = { "PackagedParams", nullptr, (EPropertyFlags)0x0040000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMultiNodeFunParamPackager, PackagedParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_bIsCPP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_FunName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::NewProp_PackagedParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiNodeFunParamPackager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::ClassParams = {
		&UMultiNodeFunParamPackager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiNodeFunParamPackager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMultiNodeFunParamPackager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMultiNodeFunParamPackager, 4235700968);
	template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<UMultiNodeFunParamPackager>()
	{
		return UMultiNodeFunParamPackager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMultiNodeFunParamPackager(Z_Construct_UClass_UMultiNodeFunParamPackager, &UMultiNodeFunParamPackager::StaticClass, TEXT("/Script/NDisplayEventSender"), TEXT("UMultiNodeFunParamPackager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiNodeFunParamPackager);
	DEFINE_FUNCTION(ANDisplayEventManager::execCallNdisplayEventOver)
	{
		P_GET_OBJECT(UObject,Z_Param_FunOwner);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallNdisplayEventOver(Z_Param_FunOwner,Z_Param_FunName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANDisplayEventManager::execTriggleMultiNodeEvent_Binary)
	{
		P_GET_OBJECT(UObject,Z_Param_FunOwner);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunName);
		P_GET_TARRAY_REF(FMultiNodeFunParam,Z_Param_Out_FunParams);
		P_GET_ENUM_REF(EExePath,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggleMultiNodeEvent_Binary(Z_Param_FunOwner,Z_Param_FunName,Z_Param_Out_FunParams,(EExePath&)(Z_Param_Out_Path));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANDisplayEventManager::execTriggleMultiNodeEvent)
	{
		P_GET_OBJECT(UObject,Z_Param_FunOwner);
		P_GET_PROPERTY(FNameProperty,Z_Param_FunName);
		P_GET_TMAP(FString,FString,Z_Param_FunParams);
		P_GET_ENUM_REF(EExePath,Z_Param_Out_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggleMultiNodeEvent(Z_Param_FunOwner,Z_Param_FunName,Z_Param_FunParams,(EExePath&)(Z_Param_Out_Path));
		P_NATIVE_END;
	}
	void ANDisplayEventManager::StaticRegisterNativesANDisplayEventManager()
	{
		UClass* Class = ANDisplayEventManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallNdisplayEventOver", &ANDisplayEventManager::execCallNdisplayEventOver },
			{ "TriggleMultiNodeEvent", &ANDisplayEventManager::execTriggleMultiNodeEvent },
			{ "TriggleMultiNodeEvent_Binary", &ANDisplayEventManager::execTriggleMultiNodeEvent_Binary },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics
	{
		struct NDisplayEventManager_eventCallNdisplayEventOver_Parms
		{
			UObject* FunOwner;
			FName FunName;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunOwner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::NewProp_FunOwner = { "FunOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventCallNdisplayEventOver_Parms, FunOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::NewProp_FunName = { "FunName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventCallNdisplayEventOver_Parms, FunName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::NewProp_FunOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::NewProp_FunName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* \xe6\xa0\x87\xe8\xae\xb0\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\xe7\xbb\x93\xe6\x9d\x9f\n\x09* @Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n\x09* @Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97\n\x09*/" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
		{ "ToolTip", "\xe6\xa0\x87\xe8\xae\xb0\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\xe7\xbb\x93\xe6\x9d\x9f\n@Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n@Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDisplayEventManager, nullptr, "CallNdisplayEventOver", nullptr, nullptr, sizeof(NDisplayEventManager_eventCallNdisplayEventOver_Parms), Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics
	{
		struct NDisplayEventManager_eventTriggleMultiNodeEvent_Parms
		{
			UObject* FunOwner;
			FName FunName;
			TMap<FString,FString> FunParams;
			EExePath Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunOwner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunParams_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FunParams_Key_KeyProp;
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FunParams;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Path_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunOwner = { "FunOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Parms, FunOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunName = { "FunName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Parms, FunName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams_ValueProp = { "FunParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams_Key_KeyProp = { "FunParams_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams = { "FunParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Parms, FunParams), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_Path_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Parms, Path), Z_Construct_UEnum_NDisplayEventSender_EExePath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_FunParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_Path_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* \xe6\x94\xaf\xe6\x8c\x81\xe5\x87\xbd\xe6\x95\xb0\xe5\x92\x8c\xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe4\xbd\x86\xe5\xb0\xbd\xe9\x87\x8f\xe4\xbf\x9d\xe8\xaf\x81\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe6\x94\xbe\xe7\xbd\xae\xe5\x9c\xa8\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x89\x8d\xe9\x9d\xa2\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe8\xa2\xab\xe6\x89\xa7\xe8\xa1\x8c\xe5\xa4\x9a\xe6\xac\xa1\n\x09*\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\n\x09* 1.\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\x99\xae\xe9\x80\x9a\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xe5\x8e\xbb\xe8\xb0\x83\xe7\x94\xa8\xe8\xa2\xab\xe8\xbd\xac\xe6\x8d\xa2\xe5\x90\x8e\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe4\xb8\x94\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xbf\x9e\xe7\xbb\xad\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe4\xbd\x86\xe6\x98\xaf\xe4\xb8\x8d\xe8\xa6\x81\xe7\x9f\xad\xe6\x97\xb6\xe9\x97\xb4\xe5\x86\x85\xe8\xb0\x83\xe7\x94\xa8\xe5\x90\x8c\xe4\xb8\x80\xe4\xb8\xaa\xe8\xa2\xab\xe8\xbd\xac\xe6\x8d\xa2\xe5\x90\x8e\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe5\x90\x8d\xe5\xad\x97\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84\xef\xbc\x89\xe5\xa4\x9a\xe6\xac\xa1\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe5\x8f\xaa\xe8\x83\xbd\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb8\x80\xe6\xac\xa1\n\x09* 2.\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xe5\x86\x85\xe9\x83\xa8\xe8\xaf\xb7\xe4\xb8\x8d\xe8\xa6\x81\xe5\x8e\xbb\xe8\xb0\x83\xe7\x94\xa8\xe5\x85\xb6\xe4\xbb\x96\xe5\xb7\xb2\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x88\x96\xe8\x80\x85\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe6\x89\xa7\xe8\xa1\x8c\xe9\xa1\xba\xe5\xba\x8f\xe6\xb7\xb7\xe4\xb9\xb1\xe4\xb8\x94\xe5\xa4\x9a\xe6\xac\xa1\xe6\x89\xa7\xe8\xa1\x8c\n\x09* 3.\xe8\xbd\xac\xe6\x8d\xa2\xe4\xba\x8b\xe4\xbb\xb6\xe5\xb0\xbd\xe9\x87\x8f\xe5\x86\x99\xe5\x9c\xa8\xe6\xaf\x8f\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe9\x83\xbd\xe4\xbc\x9a\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8a\xef\xbc\x88\xe5\x9b\xa0\xe4\xb8\xba\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe9\x9c\x80\xe8\xa6\x81\xe9\x80\x9a\xe8\xbf\x87\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xaf\xbb\xe6\x89\xbe\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe5\x86\x99\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9d\x9e\xe5\x90\x84\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe9\x83\xbd\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8a\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe9\x82\xa3\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe6\x97\xa0\xe6\xb3\x95\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9b\xae\xe6\xa0\x87\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x89\n\x09* 4.\xe5\xb0\xbd\xe9\x87\x8f\xe5\x8f\xaa\xe7\x94\xa8""ExecuteMultiNodeEvent_Auto\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9d\x9e\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""ExecuteMultiNodeEvent\xe9\x82\xa3\xe4\xb9\x88\xe6\xaf\x8f\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xe8\xaf\xb7\xe5\x86\x99\xe5\x9c\xa8NormalExe\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\xbb\xe6\x9c\xba\xe7\x89\xb9\xe4\xbe\x8b\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xe5\x88\x99\xe5\x86\x99\xe5\x9c\xa8MultiNodeExe\xef\xbc\x88\xe5\x9b\xa0\xe4\xb8\xba\xe8\xaf\xa5\xe5\xbc\x95\xe8\x84\x9a\xe6\x98\xaf\xe4\xb8\xbb\xe6\x9c\xba\xe5\x88\x86\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xa7\xe8\xa1\x8c\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xef\xbc\x8c\xe5\x85\xb6\xe5\xae\x83\xe8\x8a\x82\xe7\x82\xb9\xe4\xb8\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe8\xaf\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89\n\x09* 5.\xe8\xbd\xac\xe6\x8d\xa2\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe9\xa1\xba\xe5\xba\x8f\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x80\xe5\xaf\xb9\xe4\xb8\x80\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe4\xb8\x80\xe5\xbf\x85\xe9\xa1\xbb\xe5\xaf\xb9\xe5\xba\x94\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x8f\x82\xe6\x95\xb0\xe4\xb8\x80\xef\xbc\x8c\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe4\xba\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe5\xaf\xb9\xe5\xba\x94\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x8f\x82\xe6\x95\xb0\xe4\xba\x8c\n\x09* 6.\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe8\xaf\xb7\xe4\xb8\x8d\xe8\xa6\x81\xe6\x9c\x89\xe8\xbf\x94\xe5\x9b\x9e\xe5\x80\xbc\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe5\xae\x9e\xe5\x9c\xa8\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x94\xe5\x9b\x9e\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xae\x9e\xe7\x8e\xb0\xe9\x80\xbb\xe8\xbe\x91\xe5\x86\x85\xe7\xbb\x93\xe6\x9e\x9c\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\xad\xe9\x97\xb4\xe7\xb1\xbb\xef\xbc\x8c\xe5\x90\x84\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe5\x86\x8d\xe5\x8e\xbb\xe5\x8f\x96\n\x09*\n\x09* \xe8\xa7\xa6\xe5\x8f\x91\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\n\x09* @Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n\x09* @Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97\n\x09* @Param FunParams \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\n\x09* @Return Path \xe5\xbd\x93\xe5\x89\x8d\xe4\xba\x8b\xe4\xbb\xb6\xe5\x87\xba\xe5\x8f\xa3\xef\xbc\x8cNormalExe\xe6\xad\xa3\xe5\xb8\xb8\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8cMultiNodeExe\xe6\xad\xa3\xe5\x9c\xa8\xe5\x87\x86\xe5\xa4\x87\xe8\xb0\x83\xe7\x94\xa8\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\n\x09*/" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
		{ "ToolTip", "\xe6\x94\xaf\xe6\x8c\x81\xe5\x87\xbd\xe6\x95\xb0\xe5\x92\x8c\xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe8\xbd\xac\xe6\x8d\xa2\xef\xbc\x8c\xe4\xbd\x86\xe5\xb0\xbd\xe9\x87\x8f\xe4\xbf\x9d\xe8\xaf\x81\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe6\x94\xbe\xe7\xbd\xae\xe5\x9c\xa8\xe7\xac\xac\xe4\xb8\x80\xe4\xb8\xaa\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x89\x8d\xe9\x9d\xa2\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe8\xa2\xab\xe6\x89\xa7\xe8\xa1\x8c\xe5\xa4\x9a\xe6\xac\xa1\n\xe6\xb3\xa8\xe6\x84\x8f\xef\xbc\x9a\n1.\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xbd\xbf\xe7\x94\xa8\xe6\x99\xae\xe9\x80\x9a\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xe5\x8e\xbb\xe8\xb0\x83\xe7\x94\xa8\xe8\xa2\xab\xe8\xbd\xac\xe6\x8d\xa2\xe5\x90\x8e\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x8c\xe4\xb8\x94\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xbf\x9e\xe7\xbb\xad\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x8c\xe4\xbd\x86\xe6\x98\xaf\xe4\xb8\x8d\xe8\xa6\x81\xe7\x9f\xad\xe6\x97\xb6\xe9\x97\xb4\xe5\x86\x85\xe8\xb0\x83\xe7\x94\xa8\xe5\x90\x8c\xe4\xb8\x80\xe4\xb8\xaa\xe8\xa2\xab\xe8\xbd\xac\xe6\x8d\xa2\xe5\x90\x8e\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x88\xe5\x90\x8d\xe5\xad\x97\xe7\x9b\xb8\xe5\x90\x8c\xe7\x9a\x84\xef\xbc\x89\xe5\xa4\x9a\xe6\xac\xa1\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe5\x8f\xaa\xe8\x83\xbd\xe6\x89\xa7\xe8\xa1\x8c\xe4\xb8\x80\xe6\xac\xa1\n2.\xe6\xad\xa3\xe5\x9c\xa8\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe8\x80\x85\xe4\xba\x8b\xe4\xbb\xb6\xe5\x86\x85\xe9\x83\xa8\xe8\xaf\xb7\xe4\xb8\x8d\xe8\xa6\x81\xe5\x8e\xbb\xe8\xb0\x83\xe7\x94\xa8\xe5\x85\xb6\xe4\xbb\x96\xe5\xb7\xb2\xe8\xbd\xac\xe6\x8d\xa2\xe7\x9a\x84\xe4\xba\x8b\xe4\xbb\xb6\xe6\x88\x96\xe8\x80\x85\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\x90\xa6\xe5\x88\x99\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe6\x89\xa7\xe8\xa1\x8c\xe9\xa1\xba\xe5\xba\x8f\xe6\xb7\xb7\xe4\xb9\xb1\xe4\xb8\x94\xe5\xa4\x9a\xe6\xac\xa1\xe6\x89\xa7\xe8\xa1\x8c\n3.\xe8\xbd\xac\xe6\x8d\xa2\xe4\xba\x8b\xe4\xbb\xb6\xe5\xb0\xbd\xe9\x87\x8f\xe5\x86\x99\xe5\x9c\xa8\xe6\xaf\x8f\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe9\x83\xbd\xe4\xbc\x9a\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8a\xef\xbc\x88\xe5\x9b\xa0\xe4\xb8\xba\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe9\x9c\x80\xe8\xa6\x81\xe9\x80\x9a\xe8\xbf\x87\xe8\xaf\xa5\xe5\xaf\xb9\xe8\xb1\xa1\xe5\xaf\xbb\xe6\x89\xbe\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe5\x86\x99\xe5\x9c\xa8\xe4\xb8\x80\xe4\xb8\xaa\xe9\x9d\x9e\xe5\x90\x84\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe9\x83\xbd\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\xe4\xb8\x8a\xe4\xbc\x9a\xe5\xaf\xbc\xe8\x87\xb4\xe9\x82\xa3\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe6\x97\xa0\xe6\xb3\x95\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9b\xae\xe6\xa0\x87\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x89\n4.\xe5\xb0\xbd\xe9\x87\x8f\xe5\x8f\xaa\xe7\x94\xa8""ExecuteMultiNodeEvent_Auto\xe8\x8a\x82\xe7\x82\xb9\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9d\x9e\xe8\xa6\x81\xe4\xbd\xbf\xe7\x94\xa8""ExecuteMultiNodeEvent\xe9\x82\xa3\xe4\xb9\x88\xe6\xaf\x8f\xe4\xb8\xaa\xe8\x8a\x82\xe7\x82\xb9\xe9\x9c\x80\xe8\xa6\x81\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xe8\xaf\xb7\xe5\x86\x99\xe5\x9c\xa8NormalExe\xe5\xbc\x95\xe8\x84\x9a\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe9\x9c\x80\xe8\xa6\x81\xe4\xb8\xbb\xe6\x9c\xba\xe7\x89\xb9\xe4\xbe\x8b\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xe5\x88\x99\xe5\x86\x99\xe5\x9c\xa8MultiNodeExe\xef\xbc\x88\xe5\x9b\xa0\xe4\xb8\xba\xe8\xaf\xa5\xe5\xbc\x95\xe8\x84\x9a\xe6\x98\xaf\xe4\xb8\xbb\xe6\x9c\xba\xe5\x88\x86\xe5\x8f\x91\xe4\xba\x8b\xe4\xbb\xb6\xe6\x89\xa7\xe8\xa1\x8c\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xef\xbc\x8c\xe5\x85\xb6\xe5\xae\x83\xe8\x8a\x82\xe7\x82\xb9\xe4\xb8\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe8\xaf\xa5\xe5\xbc\x95\xe8\x84\x9a\xe7\x9a\x84\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x89\n5.\xe8\xbd\xac\xe6\x8d\xa2\xe5\x87\xbd\xe6\x95\xb0\xe6\x88\x96\xe4\xba\x8b\xe4\xbb\xb6\xe7\x9a\x84\xe5\x8f\x82\xe6\x95\xb0\xe9\xa1\xba\xe5\xba\x8f\xe5\xbf\x85\xe9\xa1\xbb\xe4\xb8\x80\xe5\xaf\xb9\xe4\xb8\x80\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe4\xb8\x80\xe5\xbf\x85\xe9\xa1\xbb\xe5\xaf\xb9\xe5\xba\x94\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x8f\x82\xe6\x95\xb0\xe4\xb8\x80\xef\xbc\x8c\xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe4\xba\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe5\xaf\xb9\xe5\xba\x94\xe8\xbd\xac\xe6\x8d\xa2\xe8\x8a\x82\xe7\x82\xb9\xe5\x8f\x82\xe6\x95\xb0\xe4\xba\x8c\n6.\xe5\xae\x9a\xe4\xb9\x89\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\xe8\xaf\xb7\xe4\xb8\x8d\xe8\xa6\x81\xe6\x9c\x89\xe8\xbf\x94\xe5\x9b\x9e\xe5\x80\xbc\xef\xbc\x8c\xe5\xa6\x82\xe6\x9e\x9c\xe5\xae\x9e\xe5\x9c\xa8\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x94\xe5\x9b\x9e\xe5\x80\xbc\xe5\x8f\xaf\xe4\xbb\xa5\xe5\xae\x9e\xe7\x8e\xb0\xe9\x80\xbb\xe8\xbe\x91\xe5\x86\x85\xe7\xbb\x93\xe6\x9e\x9c\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe4\xb8\xad\xe9\x97\xb4\xe7\xb1\xbb\xef\xbc\x8c\xe5\x90\x84\xe4\xb8\xaa\xe7\xbb\x93\xe7\x82\xb9\xe5\x86\x8d\xe5\x8e\xbb\xe5\x8f\x96\n\n\xe8\xa7\xa6\xe5\x8f\x91\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\n@Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n@Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97\n@Param FunParams \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\n@Return Path \xe5\xbd\x93\xe5\x89\x8d\xe4\xba\x8b\xe4\xbb\xb6\xe5\x87\xba\xe5\x8f\xa3\xef\xbc\x8cNormalExe\xe6\xad\xa3\xe5\xb8\xb8\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8cMultiNodeExe\xe6\xad\xa3\xe5\x9c\xa8\xe5\x87\x86\xe5\xa4\x87\xe8\xb0\x83\xe7\x94\xa8\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDisplayEventManager, nullptr, "TriggleMultiNodeEvent", nullptr, nullptr, sizeof(NDisplayEventManager_eventTriggleMultiNodeEvent_Parms), Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics
	{
		struct NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms
		{
			UObject* FunOwner;
			FName FunName;
			TArray<FMultiNodeFunParam> FunParams;
			EExePath Path;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunOwner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunParams_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FunParams;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Path_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunOwner = { "FunOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms, FunOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunName = { "FunName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms, FunName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunParams_Inner = { "FunParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMultiNodeFunParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunParams = { "FunParams", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms, FunParams), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_Path_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms, Path), Z_Construct_UEnum_NDisplayEventSender_EExePath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_FunParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_Path_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* \xe8\xa7\xa6\xe5\x8f\x91\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe7\x89\x88\xe6\x9c\xac\n\x09* @Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n\x09* @Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97\n\x09* @Param FunParamPackager \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe5\xae\xb9\xe5\x99\xa8\n\x09* @Return Path \xe5\xbd\x93\xe5\x89\x8d\xe4\xba\x8b\xe4\xbb\xb6\xe5\x87\xba\xe5\x8f\xa3\xef\xbc\x8cNormalExe\xe6\xad\xa3\xe5\xb8\xb8\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8cMultiNodeExe\xe6\xad\xa3\xe5\x9c\xa8\xe5\x87\x86\xe5\xa4\x87\xe8\xb0\x83\xe7\x94\xa8\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\n\x09*/" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9\xe4\xba\x8b\xe4\xbb\xb6\xe8\x93\x9d\xe5\x9b\xbe\xe4\xba\x8c\xe8\xbf\x9b\xe5\x88\xb6\xe7\x89\x88\xe6\x9c\xac\n@Param FunOwner \xe5\x87\xbd\xe6\x95\xb0\xe6\x89\x80\xe5\xad\x98\xe5\x9c\xa8\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n@Param FunName \xe5\x87\xbd\xe6\x95\xb0\xe5\x90\x8d\xe5\xad\x97\n@Param FunParamPackager \xe5\x87\xbd\xe6\x95\xb0\xe5\x8f\x82\xe6\x95\xb0\xe5\xae\xb9\xe5\x99\xa8\n@Return Path \xe5\xbd\x93\xe5\x89\x8d\xe4\xba\x8b\xe4\xbb\xb6\xe5\x87\xba\xe5\x8f\xa3\xef\xbc\x8cNormalExe\xe6\xad\xa3\xe5\xb8\xb8\xe6\x89\xa7\xe8\xa1\x8c\xe9\x80\xbb\xe8\xbe\x91\xef\xbc\x8cMultiNodeExe\xe6\xad\xa3\xe5\x9c\xa8\xe5\x87\x86\xe5\xa4\x87\xe8\xb0\x83\xe7\x94\xa8\xe5\xa4\x9a\xe8\x8a\x82\xe7\x82\xb9" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANDisplayEventManager, nullptr, "TriggleMultiNodeEvent_Binary", nullptr, nullptr, sizeof(NDisplayEventManager_eventTriggleMultiNodeEvent_Binary_Parms), Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANDisplayEventManager_NoRegister()
	{
		return ANDisplayEventManager::StaticClass();
	}
	struct Z_Construct_UClass_ANDisplayEventManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FunExeFlag_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FunExeFlag_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunExeFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FunExeFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsBoundEvent_MetaData[];
#endif
		static void NewProp_IsBoundEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsBoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunParamPackager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FunParamPackager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANDisplayEventManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSender,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANDisplayEventManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANDisplayEventManager_CallNdisplayEventOver, "CallNdisplayEventOver" }, // 82977754
		{ &Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent, "TriggleMultiNodeEvent" }, // 1017757619
		{ &Z_Construct_UFunction_ANDisplayEventManager_TriggleMultiNodeEvent_Binary, "TriggleMultiNodeEvent_Binary" }, // 445359019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDisplayEventManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NDisplayEventManager.h" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_ValueProp = { "FunExeFlag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_Key_KeyProp = { "FunExeFlag_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_MetaData[] = {
		{ "Comment", "/**\n\x09* \xe6\xa0\x87\xe8\xae\xb0\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0\n\x09*/" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
		{ "ToolTip", "\xe6\xa0\x87\xe8\xae\xb0\xe5\xbd\x93\xe5\x89\x8d\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag = { "FunExeFlag", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDisplayEventManager, FunExeFlag), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent_MetaData[] = {
		{ "Comment", "/**\n\x09* \xe8\xbf\x87\xe6\xbb\xa4\xe7\xbb\x91\xe5\xae\x9a\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\xbc\x80\xe5\x85\xb3\n\x09*/" },
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
		{ "ToolTip", "\xe8\xbf\x87\xe6\xbb\xa4\xe7\xbb\x91\xe5\xae\x9a\xe7\xac\xac\xe4\xb8\x80\xe6\xac\xa1\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\xbc\x80\xe5\x85\xb3" },
	};
#endif
	void Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent_SetBit(void* Obj)
	{
		((ANDisplayEventManager*)Obj)->IsBoundEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent = { "IsBoundEvent", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANDisplayEventManager), &Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunParamPackager_MetaData[] = {
		{ "ModuleRelativePath", "Public/NDisplayEventManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunParamPackager = { "FunParamPackager", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANDisplayEventManager, FunParamPackager), Z_Construct_UClass_UMultiNodeFunParamPackager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunParamPackager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunParamPackager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANDisplayEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunExeFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_IsBoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANDisplayEventManager_Statics::NewProp_FunParamPackager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANDisplayEventManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANDisplayEventManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANDisplayEventManager_Statics::ClassParams = {
		&ANDisplayEventManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANDisplayEventManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANDisplayEventManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANDisplayEventManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANDisplayEventManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANDisplayEventManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANDisplayEventManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANDisplayEventManager, 3944214957);
	template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<ANDisplayEventManager>()
	{
		return ANDisplayEventManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANDisplayEventManager(Z_Construct_UClass_ANDisplayEventManager, &ANDisplayEventManager::StaticClass, TEXT("/Script/NDisplayEventSender"), TEXT("ANDisplayEventManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANDisplayEventManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
