// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougueLike/Public/InteractableObject/SPotion.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPotion() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASPotion_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASPotion();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBaseInteractableObject();
	UPackage* Z_Construct_UPackage__Script_ActionRougueLike();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASPotion::execHandlePotionVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePotionVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPotion::execHandlePotionLogic)
	{
		P_GET_OBJECT(USAttributeComponent,Z_Param_AnAttributeComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandlePotionLogic(Z_Param_AnAttributeComp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASPotion::execInteract_Implementation)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
		P_NATIVE_END;
	}
	void ASPotion::StaticRegisterNativesASPotion()
	{
		UClass* Class = ASPotion::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandlePotionLogic", &ASPotion::execHandlePotionLogic },
			{ "HandlePotionVisibility", &ASPotion::execHandlePotionVisibility },
			{ "Interact_Implementation", &ASPotion::execInteract_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics
	{
		struct SPotion_eventHandlePotionLogic_Parms
		{
			USAttributeComponent* AnAttributeComp;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnAttributeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnAttributeComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::NewProp_AnAttributeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::NewProp_AnAttributeComp = { "AnAttributeComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPotion_eventHandlePotionLogic_Parms, AnAttributeComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::NewProp_AnAttributeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::NewProp_AnAttributeComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::NewProp_AnAttributeComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject/SPotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPotion, nullptr, "HandlePotionLogic", nullptr, nullptr, sizeof(SPotion_eventHandlePotionLogic_Parms), Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPotion_HandlePotionLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPotion_HandlePotionLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject/SPotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPotion, nullptr, "HandlePotionVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPotion_HandlePotionVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPotion_HandlePotionVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics
	{
		struct SPotion_eventInteract_Implementation_Parms
		{
			APawn* InstigatorPawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SPotion_eventInteract_Implementation_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractableObject/SPotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASPotion, nullptr, "Interact_Implementation", nullptr, nullptr, sizeof(SPotion_eventInteract_Implementation_Parms), Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASPotion_Interact_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASPotion_Interact_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASPotion_NoRegister()
	{
		return ASPotion::StaticClass();
	}
	struct Z_Construct_UClass_ASPotion_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerOfPotion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerOfPotion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASPotion_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBaseInteractableObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASPotion_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASPotion_HandlePotionLogic, "HandlePotionLogic" }, // 3935242579
		{ &Z_Construct_UFunction_ASPotion_HandlePotionVisibility, "HandlePotionVisibility" }, // 2210499634
		{ &Z_Construct_UFunction_ASPotion_Interact_Implementation, "Interact_Implementation" }, // 3083207995
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPotion_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractableObject/SPotion.h" },
		{ "ModuleRelativePath", "Public/InteractableObject/SPotion.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASPotion_Statics::NewProp_PowerOfPotion_MetaData[] = {
		{ "Category", "Params" },
		{ "ModuleRelativePath", "Public/InteractableObject/SPotion.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASPotion_Statics::NewProp_PowerOfPotion = { "PowerOfPotion", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASPotion, PowerOfPotion), METADATA_PARAMS(Z_Construct_UClass_ASPotion_Statics::NewProp_PowerOfPotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASPotion_Statics::NewProp_PowerOfPotion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASPotion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASPotion_Statics::NewProp_PowerOfPotion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASPotion_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASPotion>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASPotion_Statics::ClassParams = {
		&ASPotion::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASPotion_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASPotion_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASPotion_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASPotion_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASPotion()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASPotion_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASPotion, 1440438109);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<ASPotion>()
	{
		return ASPotion::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASPotion(Z_Construct_UClass_ASPotion, &ASPotion::StaticClass, TEXT("/Script/ActionRougueLike"), TEXT("ASPotion"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASPotion);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
