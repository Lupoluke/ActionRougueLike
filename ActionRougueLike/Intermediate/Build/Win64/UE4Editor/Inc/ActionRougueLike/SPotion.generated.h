// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USAttributeComponent;
class APawn;
#ifdef ACTIONROUGUELIKE_SPotion_generated_h
#error "SPotion.generated.h already included, missing '#pragma once' in SPotion.h"
#endif
#define ACTIONROUGUELIKE_SPotion_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandlePotionVisibility); \
	DECLARE_FUNCTION(execHandlePotionLogic); \
	DECLARE_FUNCTION(execInteract_Implementation);


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandlePotionVisibility); \
	DECLARE_FUNCTION(execHandlePotionLogic); \
	DECLARE_FUNCTION(execInteract_Implementation);


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASPotion(); \
	friend struct Z_Construct_UClass_ASPotion_Statics; \
public: \
	DECLARE_CLASS(ASPotion, ASBaseInteractableObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASPotion)


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASPotion(); \
	friend struct Z_Construct_UClass_ASPotion_Statics; \
public: \
	DECLARE_CLASS(ASPotion, ASBaseInteractableObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASPotion)


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASPotion(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASPotion) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPotion); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPotion(ASPotion&&); \
	NO_API ASPotion(const ASPotion&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASPotion(ASPotion&&); \
	NO_API ASPotion(const ASPotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASPotion); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASPotion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASPotion)


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PowerOfPotion() { return STRUCT_OFFSET(ASPotion, PowerOfPotion); }


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_13_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASPotion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SPotion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
