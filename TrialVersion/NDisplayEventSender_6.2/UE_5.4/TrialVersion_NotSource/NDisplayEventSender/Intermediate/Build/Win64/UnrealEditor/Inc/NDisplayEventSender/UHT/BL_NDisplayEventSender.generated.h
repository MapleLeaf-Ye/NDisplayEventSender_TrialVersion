// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BL_NDisplayEventSender.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EExePath : uint8;
struct FMultiNodeFunParam;
#ifdef NDISPLAYEVENTSENDER_BL_NDisplayEventSender_generated_h
#error "BL_NDisplayEventSender.generated.h already included, missing '#pragma once' in BL_NDisplayEventSender.h"
#endif
#define NDISPLAYEVENTSENDER_BL_NDisplayEventSender_generated_h

#define FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execErrorCallFunc_Native); \
	DECLARE_FUNCTION(execK2_ActorToNDisEventString); \
	DECLARE_FUNCTION(execK2_ObjectToNDisEventString);


#define FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBL_NDisplayEventSender(); \
	friend struct Z_Construct_UClass_UBL_NDisplayEventSender_Statics; \
public: \
	DECLARE_CLASS(UBL_NDisplayEventSender, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDisplayEventSender"), NO_API) \
	DECLARE_SERIALIZER(UBL_NDisplayEventSender)


#define FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBL_NDisplayEventSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBL_NDisplayEventSender(UBL_NDisplayEventSender&&); \
	UBL_NDisplayEventSender(const UBL_NDisplayEventSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBL_NDisplayEventSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBL_NDisplayEventSender); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBL_NDisplayEventSender) \
	NO_API virtual ~UBL_NDisplayEventSender();


#define FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_13_PROLOG
#define FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<class UBL_NDisplayEventSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_BL_NDisplayEventSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
