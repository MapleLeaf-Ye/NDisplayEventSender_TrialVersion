// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMultiNodeFunParam;
class UObject;
enum class EExePath : uint8;
 
#ifdef NDISPLAYEVENTSENDER_NDisplayEventManager_generated_h
#error "NDisplayEventManager.generated.h already included, missing '#pragma once' in NDisplayEventManager.h"
#endif
#define NDISPLAYEVENTSENDER_NDisplayEventManager_generated_h

#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMultiNodeFunParam_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NDISPLAYEVENTSENDER_API UScriptStruct* StaticStruct<struct FMultiNodeFunParam>();

#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_SPARSE_DATA
#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPackagedParam); \
	DECLARE_FUNCTION(execGetFunName); \
	DECLARE_FUNCTION(execGetFunOwner); \
	DECLARE_FUNCTION(execGetIsCPPEvent); \
	DECLARE_FUNCTION(execSetFuncOwnerAndFuncName); \
	DECLARE_FUNCTION(execSetIsCPP); \
	DECLARE_FUNCTION(execClearPackagerParams); \
	DECLARE_FUNCTION(execAddNewFunParam);


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPackagedParam); \
	DECLARE_FUNCTION(execGetFunName); \
	DECLARE_FUNCTION(execGetFunOwner); \
	DECLARE_FUNCTION(execGetIsCPPEvent); \
	DECLARE_FUNCTION(execSetFuncOwnerAndFuncName); \
	DECLARE_FUNCTION(execSetIsCPP); \
	DECLARE_FUNCTION(execClearPackagerParams); \
	DECLARE_FUNCTION(execAddNewFunParam);


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiNodeFunParamPackager(); \
	friend struct Z_Construct_UClass_UMultiNodeFunParamPackager_Statics; \
public: \
	DECLARE_CLASS(UMultiNodeFunParamPackager, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDisplayEventSender"), NO_API) \
	DECLARE_SERIALIZER(UMultiNodeFunParamPackager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_INCLASS \
private: \
	static void StaticRegisterNativesUMultiNodeFunParamPackager(); \
	friend struct Z_Construct_UClass_UMultiNodeFunParamPackager_Statics; \
public: \
	DECLARE_CLASS(UMultiNodeFunParamPackager, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NDisplayEventSender"), NO_API) \
	DECLARE_SERIALIZER(UMultiNodeFunParamPackager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiNodeFunParamPackager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiNodeFunParamPackager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiNodeFunParamPackager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiNodeFunParamPackager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiNodeFunParamPackager(UMultiNodeFunParamPackager&&); \
	NO_API UMultiNodeFunParamPackager(const UMultiNodeFunParamPackager&); \
public:


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMultiNodeFunParamPackager(UMultiNodeFunParamPackager&&); \
	NO_API UMultiNodeFunParamPackager(const UMultiNodeFunParamPackager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiNodeFunParamPackager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiNodeFunParamPackager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMultiNodeFunParamPackager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsCPP() { return STRUCT_OFFSET(UMultiNodeFunParamPackager, bIsCPP); } \
	FORCEINLINE static uint32 __PPO__FunOwner() { return STRUCT_OFFSET(UMultiNodeFunParamPackager, FunOwner); } \
	FORCEINLINE static uint32 __PPO__FunName() { return STRUCT_OFFSET(UMultiNodeFunParamPackager, FunName); } \
	FORCEINLINE static uint32 __PPO__PackagedParams() { return STRUCT_OFFSET(UMultiNodeFunParamPackager, PackagedParams); }


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_71_PROLOG
#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_SPARSE_DATA \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_RPC_WRAPPERS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_INCLASS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_SPARSE_DATA \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_75_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<class UMultiNodeFunParamPackager>();

#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_SPARSE_DATA
#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCallNdisplayEventOver); \
	DECLARE_FUNCTION(execTriggleMultiNodeEvent_Binary); \
	DECLARE_FUNCTION(execTriggleMultiNodeEvent);


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCallNdisplayEventOver); \
	DECLARE_FUNCTION(execTriggleMultiNodeEvent_Binary); \
	DECLARE_FUNCTION(execTriggleMultiNodeEvent);


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANDisplayEventManager(); \
	friend struct Z_Construct_UClass_ANDisplayEventManager_Statics; \
public: \
	DECLARE_CLASS(ANDisplayEventManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDisplayEventSender"), NO_API) \
	DECLARE_SERIALIZER(ANDisplayEventManager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_INCLASS \
private: \
	static void StaticRegisterNativesANDisplayEventManager(); \
	friend struct Z_Construct_UClass_ANDisplayEventManager_Statics; \
public: \
	DECLARE_CLASS(ANDisplayEventManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NDisplayEventSender"), NO_API) \
	DECLARE_SERIALIZER(ANDisplayEventManager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDisplayEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDisplayEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDisplayEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDisplayEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDisplayEventManager(ANDisplayEventManager&&); \
	NO_API ANDisplayEventManager(const ANDisplayEventManager&); \
public:


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANDisplayEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANDisplayEventManager(ANDisplayEventManager&&); \
	NO_API ANDisplayEventManager(const ANDisplayEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANDisplayEventManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANDisplayEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANDisplayEventManager)


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FunExeFlag() { return STRUCT_OFFSET(ANDisplayEventManager, FunExeFlag); } \
	FORCEINLINE static uint32 __PPO__IsBoundEvent() { return STRUCT_OFFSET(ANDisplayEventManager, IsBoundEvent); } \
	FORCEINLINE static uint32 __PPO__FunParamPackager() { return STRUCT_OFFSET(ANDisplayEventManager, FunParamPackager); }


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_151_PROLOG
#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_SPARSE_DATA \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_RPC_WRAPPERS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_INCLASS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_SPARSE_DATA \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h_154_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NDISPLAYEVENTSENDER_API UClass* StaticClass<class ANDisplayEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NDisplayEventSender_Source_NDisplayEventSender_Public_NDisplayEventManager_h


#define FOREACH_ENUM_EEXEPATH(op) \
	op(EExePath::NormalExe) \
	op(EExePath::MultiNodeExe) \
	op(EExePath::Error) 

enum class EExePath : uint8;
template<> NDISPLAYEVENTSENDER_API UEnum* StaticEnum<EExePath>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
