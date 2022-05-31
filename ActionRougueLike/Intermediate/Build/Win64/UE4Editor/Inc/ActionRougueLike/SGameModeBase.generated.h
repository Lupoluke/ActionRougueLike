// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvQueryInstanceBlueprintWrapper;
#ifdef ACTIONROUGUELIKE_SGameModeBase_generated_h
#error "SGameModeBase.generated.h already included, missing '#pragma once' in SGameModeBase.h"
#endif
#define ACTIONROUGUELIKE_SGameModeBase_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQueryCompleted); \
	DECLARE_FUNCTION(execSpawnBotTimerElapsed);


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_INCLASS \
private: \
	static void StaticRegisterNativesASGameModeBase(); \
	friend struct Z_Construct_UClass_ASGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASGameModeBase)


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASGameModeBase(ASGameModeBase&&); \
	NO_API ASGameModeBase(const ASGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASGameModeBase)


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnBotQuery() { return STRUCT_OFFSET(ASGameModeBase, SpawnBotQuery); } \
	FORCEINLINE static uint32 __PPO__SpawnTimerInterval() { return STRUCT_OFFSET(ASGameModeBase, SpawnTimerInterval); } \
	FORCEINLINE static uint32 __PPO__DifficultyCurve() { return STRUCT_OFFSET(ASGameModeBase, DifficultyCurve); } \
	FORCEINLINE static uint32 __PPO__MinionClass() { return STRUCT_OFFSET(ASGameModeBase, MinionClass); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_17_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
