// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDisplayEventSenderEditor/Public/K2Node_TransformNDisFunc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_TransformNDisFunc() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
NDISPLAYEVENTSENDEREDITOR_API UClass* Z_Construct_UClass_UK2Node_TransformNDisFunc();
NDISPLAYEVENTSENDEREDITOR_API UClass* Z_Construct_UClass_UK2Node_TransformNDisFunc_NoRegister();
UPackage* Z_Construct_UPackage__Script_NDisplayEventSenderEditor();
// End Cross Module References

// Begin Class UK2Node_TransformNDisFunc
void UK2Node_TransformNDisFunc::StaticRegisterNativesUK2Node_TransformNDisFunc()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_TransformNDisFunc);
UClass* Z_Construct_UClass_UK2Node_TransformNDisFunc_NoRegister()
{
	return UK2Node_TransformNDisFunc::StaticClass();
}
struct Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_TransformNDisFunc.h" },
		{ "ModuleRelativePath", "Public/K2Node_TransformNDisFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FunParamPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_TransformNDisFunc.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PinNum_MetaData[] = {
		{ "ModuleRelativePath", "Public/K2Node_TransformNDisFunc.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FunParamPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FunParamPins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PinNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_TransformNDisFunc>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_FunParamPins_Inner = { "FunParamPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_FunParamPins = { "FunParamPins", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_TransformNDisFunc, FunParamPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FunParamPins_MetaData), NewProp_FunParamPins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_PinNum = { "PinNum", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UK2Node_TransformNDisFunc, PinNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PinNum_MetaData), NewProp_PinNum_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_FunParamPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_FunParamPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::NewProp_PinNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_NDisplayEventSenderEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_TransformNDisFunc, IK2Node_AddPinInterface), false },  // 3816067142
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::ClassParams = {
	&UK2Node_TransformNDisFunc::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_TransformNDisFunc()
{
	if (!Z_Registration_Info_UClass_UK2Node_TransformNDisFunc.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_TransformNDisFunc.OuterSingleton, Z_Construct_UClass_UK2Node_TransformNDisFunc_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_TransformNDisFunc.OuterSingleton;
}
template<> NDISPLAYEVENTSENDEREDITOR_API UClass* StaticClass<UK2Node_TransformNDisFunc>()
{
	return UK2Node_TransformNDisFunc::StaticClass();
}
UK2Node_TransformNDisFunc::UK2Node_TransformNDisFunc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_TransformNDisFunc);
UK2Node_TransformNDisFunc::~UK2Node_TransformNDisFunc() {}
// End Class UK2Node_TransformNDisFunc

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSenderEditor_Public_K2Node_TransformNDisFunc_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_TransformNDisFunc, UK2Node_TransformNDisFunc::StaticClass, TEXT("UK2Node_TransformNDisFunc"), &Z_Registration_Info_UClass_UK2Node_TransformNDisFunc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_TransformNDisFunc), 114520528U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSenderEditor_Public_K2Node_TransformNDisFunc_h_1607506284(TEXT("/Script/NDisplayEventSenderEditor"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSenderEditor_Public_K2Node_TransformNDisFunc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSenderEditor_Public_K2Node_TransformNDisFunc_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
