// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROUGUELIKE_SBlackHole_generated_h
#error "SBlackHole.generated.h already included, missing '#pragma once' in SBlackHole.h"
#endif
#define ACTIONROUGUELIKE_SBlackHole_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFireImpulse); \
	DECLARE_FUNCTION(execDistruggiAttore);


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFireImpulse); \
	DECLARE_FUNCTION(execDistruggiAttore);


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBlackHole(); \
	friend struct Z_Construct_UClass_ASBlackHole_Statics; \
public: \
	DECLARE_CLASS(ASBlackHole, ASBaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBlackHole)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBlackHole(); \
	friend struct Z_Construct_UClass_ASBlackHole_Statics; \
public: \
	DECLARE_CLASS(ASBlackHole, ASBaseProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBlackHole)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBlackHole(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBlackHole) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBlackHole); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBlackHole(ASBlackHole&&); \
	NO_API ASBlackHole(const ASBlackHole&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBlackHole(ASBlackHole&&); \
	NO_API ASBlackHole(const ASBlackHole&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBlackHole); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBlackHole); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBlackHole)


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RadialForce() { return STRUCT_OFFSET(ASBlackHole, RadialForce); } \
	FORCEINLINE static uint32 __PPO__ForceStrength() { return STRUCT_OFFSET(ASBlackHole, ForceStrength); } \
	FORCEINLINE static uint32 __PPO__TimeOfLive() { return STRUCT_OFFSET(ASBlackHole, TimeOfLive); } \
	FORCEINLINE static uint32 __PPO__ImpulseTime() { return STRUCT_OFFSET(ASBlackHole, ImpulseTime); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_14_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASBlackHole>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SBlackHole_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
