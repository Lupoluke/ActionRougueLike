// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef ACTIONROUGUELIKE_SGameplayInterface_generated_h
#error "SGameplayInterface.generated.h already included, missing '#pragma once' in SGameplayInterface.h"
#endif
#define ACTIONROUGUELIKE_SGameplayInterface_generated_h

#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_SPARSE_DATA
#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
 \
	DECLARE_FUNCTION(execInteract);


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_EVENT_PARMS \
	struct SGameplayInterface_eventInteract_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS
#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROUGUELIKE_API USGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROUGUELIKE_API, USGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROUGUELIKE_API USGameplayInterface(USGameplayInterface&&); \
	ACTIONROUGUELIKE_API USGameplayInterface(const USGameplayInterface&); \
public:


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACTIONROUGUELIKE_API USGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACTIONROUGUELIKE_API USGameplayInterface(USGameplayInterface&&); \
	ACTIONROUGUELIKE_API USGameplayInterface(const USGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACTIONROUGUELIKE_API, USGameplayInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayInterface)


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGameplayInterface(); \
	friend struct Z_Construct_UClass_USGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(USGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActionRougueLike"), ACTIONROUGUELIKE_API) \
	DECLARE_SERIALIZER(USGameplayInterface)


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGameplayInterface() {} \
public: \
	typedef USGameplayInterface UClassType; \
	typedef ISGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISGameplayInterface() {} \
public: \
	typedef USGameplayInterface UClassType; \
	typedef ISGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_10_PROLOG \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_EVENT_PARMS


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_SPARSE_DATA \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS \
	ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONROUGUELIKE_API UClass* StaticClass<class USGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ActionRougueLike_Source_ActionRougueLike_Public_SGameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
