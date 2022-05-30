// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONROUGUELIKE_SBaseInteractableObject_generated_h
#error "SBaseInteractableObject.generated.h already included, missing '#pragma once' in SBaseInteractableObject.h"
#endif
#define ACTIONROUGUELIKE_SBaseInteractableObject_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginPlay);


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginPlay);


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASBaseInteractableObject(); \
	friend struct Z_Construct_UClass_ASBaseInteractableObject_Statics; \
public: \
	DECLARE_CLASS(ASBaseInteractableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBaseInteractableObject) \
	virtual UObject* _getUObject() const override { return const_cast<ASBaseInteractableObject*>(this); }


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_INCLASS \
private: \
	static void StaticRegisterNativesASBaseInteractableObject(); \
	friend struct Z_Construct_UClass_ASBaseInteractableObject_Statics; \
public: \
	DECLARE_CLASS(ASBaseInteractableObject, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), NO_API) \
	DECLARE_SERIALIZER(ASBaseInteractableObject) \
	virtual UObject* _getUObject() const override { return const_cast<ASBaseInteractableObject*>(this); }


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASBaseInteractableObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASBaseInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseInteractableObject(ASBaseInteractableObject&&); \
	NO_API ASBaseInteractableObject(const ASBaseInteractableObject&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASBaseInteractableObject(ASBaseInteractableObject&&); \
	NO_API ASBaseInteractableObject(const ASBaseInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASBaseInteractableObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASBaseInteractableObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASBaseInteractableObject)


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BaseMesh() { return STRUCT_OFFSET(ASBaseInteractableObject, BaseMesh); } \
	FORCEINLINE static uint32 __PPO__TimeToRespawn() { return STRUCT_OFFSET(ASBaseInteractableObject, TimeToRespawn); } \
	FORCEINLINE static uint32 __PPO__SphereOverlap() { return STRUCT_OFFSET(ASBaseInteractableObject, SphereOverlap); }


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_14_PROLOG
#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_INCLASS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_PRIVATE_PROPERTY_OFFSET \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_INCLASS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class ASBaseInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_InteractableObject_SBaseInteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
