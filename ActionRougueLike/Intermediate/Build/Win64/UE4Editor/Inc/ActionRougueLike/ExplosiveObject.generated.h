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
#ifdef ACTIONROUGUELIKE_ExplosiveObject_generated_h
#error "ExplosiveObject.generated.h already included, missing '#pragma once' in ExplosiveObject.h"
#endif
#define ACTIONROUGUELIKE_ExplosiveObject_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit);


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExplosiveObject(); \
	friend struct Z_Construct_UClass_AExplosiveObject_Statics; \
public: \
	DECLARE_CLASS(AExplosiveObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveObject)


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAExplosiveObject(); \
	friend struct Z_Construct_UClass_AExplosiveObject_Statics; \
public: \
	DECLARE_CLASS(AExplosiveObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(AExplosiveObject)


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExplosiveObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExplosiveObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveObject(AExplosiveObject&&); \
	NO_API AExplosiveObject(const AExplosiveObject&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExplosiveObject(AExplosiveObject&&); \
	NO_API AExplosiveObject(const AExplosiveObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExplosiveObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExplosiveObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExplosiveObject)


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Object() { return STRUCT_OFFSET(AExplosiveObject, SM_Object); } \
	FORCEINLINE static uint32 __PPO__ForceImpact() { return STRUCT_OFFSET(AExplosiveObject, ForceImpact); }


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_13_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class AExplosiveObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_ExplosiveObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
