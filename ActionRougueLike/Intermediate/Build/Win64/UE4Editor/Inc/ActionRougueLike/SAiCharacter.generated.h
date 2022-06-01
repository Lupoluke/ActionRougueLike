// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class AActor;
class USAttributeComponent;
#ifdef ACTIONROUGUELIKE_SAiCharacter_generated_h
#error "SAiCharacter.generated.h already included, missing '#pragma once' in SAiCharacter.h"
#endif
#define ACTIONROUGUELIKE_SAiCharacter_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPawnSeen); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execOnHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPawnSeen); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execOnHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAiCharacter(); \
	friend struct Z_Construct_UClass_ASAiCharacter_Statics; \
public: \
	DECLARE_CLASS(ASAiCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASAiCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASAiCharacter(); \
	friend struct Z_Construct_UClass_ASAiCharacter_Statics; \
public: \
	DECLARE_CLASS(ASAiCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASAiCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAiCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAiCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAiCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAiCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAiCharacter(ASAiCharacter&&); \
	NO_API ASAiCharacter(const ASAiCharacter&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASAiCharacter(ASAiCharacter&&); \
	NO_API ASAiCharacter(const ASAiCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAiCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAiCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASAiCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PawnSensingComp() { return STRUCT_OFFSET(ASAiCharacter, PawnSensingComp); } \
	FORCEINLINE static uint32 __PPO__AttributeComp() { return STRUCT_OFFSET(ASAiCharacter, AttributeComp); }


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_13_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASAiCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_AI_SAiCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
