// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USAttributeComponent;
#ifdef ACTIONROUGUELIKE_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define ACTIONROUGUELIKE_SCharacter_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__InteractionComp() { return STRUCT_OFFSET(ASCharacter, InteractionComp); } \
	FORCEINLINE static uint32 __PPO__AttributeComp() { return STRUCT_OFFSET(ASCharacter, AttributeComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ASCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__ProjectileOffset() { return STRUCT_OFFSET(ASCharacter, ProjectileOffset); } \
	FORCEINLINE static uint32 __PPO__HandSocketName() { return STRUCT_OFFSET(ASCharacter, HandSocketName); } \
	FORCEINLINE static uint32 __PPO__AttackAnim() { return STRUCT_OFFSET(ASCharacter, AttackAnim); } \
	FORCEINLINE static uint32 __PPO__CastingEffect() { return STRUCT_OFFSET(ASCharacter, CastingEffect); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_16_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
