// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ACTIONROUGUELIKE_SBaseProjectile_generated_h
#error "SBaseProjectile.generated.h already included, missing '#pragma once' in SBaseProjectile.h"
#endif
#define ACTIONROUGUELIKE_SBaseProjectile_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_RPC_WRAPPERS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(); \
 \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOnActorHit); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_EVENT_PARMS
#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_CALLBACK_WRAPPERS
#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBaseProjectile(); \
	friend struct Z_Construct_UClass_ASBaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ASBaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBaseProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBaseProjectile(); \
	friend struct Z_Construct_UClass_ASBaseProjectile_Statics; \
public: \
	DECLARE_CLASS(ASBaseProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBaseProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBaseProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBaseProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseProjectile(ASBaseProjectile&&); \
	NO_API ASBaseProjectile(const ASBaseProjectile&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseProjectile(ASBaseProjectile&&); \
	NO_API ASBaseProjectile(const ASBaseProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBaseProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ImpactVfx() { return STRUCT_OFFSET(ASBaseProjectile, ImpactVfx); } \
	FORCEINLINE static uint32 __PPO__SphereComp() { return STRUCT_OFFSET(ASBaseProjectile, SphereComp); } \
	FORCEINLINE static uint32 __PPO__MovementComp() { return STRUCT_OFFSET(ASBaseProjectile, MovementComp); } \
	FORCEINLINE static uint32 __PPO__EffectComp() { return STRUCT_OFFSET(ASBaseProjectile, EffectComp); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_14_PROLOG \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_EVENT_PARMS


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_CALLBACK_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_CALLBACK_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASBaseProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SBaseProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
