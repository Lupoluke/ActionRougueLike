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
#ifdef ACTIONROUGUELIKE_SAttributeComponent_generated_h
#error "SAttributeComponent.generated.h already included, missing '#pragma once' in SAttributeComponent.h"
#endif
#define ACTIONROUGUELIKE_SAttributeComponent_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_12_DELEGATE \
struct _Script_ActionRougueLike_eventOnHealthChanged_Parms \
{ \
	AActor* InstigatorActor; \
	USAttributeComponent* OwningComp; \
	float NewHealth; \
	float Delta; \
}; \
static inline void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, AActor* InstigatorActor, USAttributeComponent* OwningComp, float NewHealth, float Delta) \
{ \
	_Script_ActionRougueLike_eventOnHealthChanged_Parms Parms; \
	Parms.InstigatorActor=InstigatorActor; \
	Parms.OwningComp=OwningComp; \
	Parms.NewHealth=NewHealth; \
	Parms.Delta=Delta; \
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHealthChange);


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USAttributeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USAttributeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USAttributeComponent(USAttributeComponent&&); \
	NO_API USAttributeComponent(const USAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeComponent)


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USAttributeComponent, Health); }


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_15_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class USAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
