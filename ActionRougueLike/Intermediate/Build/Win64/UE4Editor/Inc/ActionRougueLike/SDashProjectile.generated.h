// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROUGUELIKE_SDashProjectile_generated_h
#error "SDashProjectile.generated.h already included, missing '#pragma once' in SDashProjectile.h"
#endif
#define ACTIONROUGUELIKE_SDashProjectile_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_RPC_WRAPPERS
#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDashProjectile(); \
	friend struct Z_Construct_UClass_ASDashProjectile_Statics; \
public: \
	DECLARE_CLASS(ASDashProjectile, ASBaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASDashProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASDashProjectile(); \
	friend struct Z_Construct_UClass_ASDashProjectile_Statics; \
public: \
	DECLARE_CLASS(ASDashProjectile, ASBaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASDashProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDashProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDashProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDashProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDashProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDashProjectile(ASDashProjectile&&); \
	NO_API ASDashProjectile(const ASDashProjectile&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDashProjectile(ASDashProjectile&&); \
	NO_API ASDashProjectile(const ASDashProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDashProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDashProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDashProjectile)


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TeleportDelay() { return STRUCT_OFFSET(ASDashProjectile, TeleportDelay); } \
	FORCEINLINE static uint32 __PPO__DetonateDelay() { return STRUCT_OFFSET(ASDashProjectile, DetonateDelay); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_14_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASDashProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SDashProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
