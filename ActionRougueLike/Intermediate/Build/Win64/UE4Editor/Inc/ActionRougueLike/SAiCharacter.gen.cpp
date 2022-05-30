// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougueLike/Public/AI/SAiCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAiCharacter() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASAiCharacter_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASAiCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionRougueLike();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASAiCharacter::execOnPawnSeen)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnSeen(Z_Param_Pawn);
		P_NATIVE_END;
	}
	void ASAiCharacter::StaticRegisterNativesASAiCharacter()
	{
		UClass* Class = ASAiCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnSeen", &ASAiCharacter::execOnPawnSeen },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics
	{
		struct SAiCharacter_eventOnPawnSeen_Parms
		{
			APawn* Pawn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SAiCharacter_eventOnPawnSeen_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SAiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASAiCharacter, nullptr, "OnPawnSeen", nullptr, nullptr, sizeof(SAiCharacter_eventOnPawnSeen_Parms), Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASAiCharacter_OnPawnSeen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASAiCharacter_OnPawnSeen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASAiCharacter_NoRegister()
	{
		return ASAiCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ASAiCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASAiCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASAiCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASAiCharacter_OnPawnSeen, "OnPawnSeen" }, // 38719993
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAiCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/SAiCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/SAiCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASAiCharacter_Statics::NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/SAiCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAiCharacter_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASAiCharacter, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASAiCharacter_Statics::NewProp_PawnSensingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASAiCharacter_Statics::NewProp_PawnSensingComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAiCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAiCharacter_Statics::NewProp_PawnSensingComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASAiCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAiCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASAiCharacter_Statics::ClassParams = {
		&ASAiCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASAiCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASAiCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASAiCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASAiCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASAiCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASAiCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASAiCharacter, 240928319);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<ASAiCharacter>()
	{
		return ASAiCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASAiCharacter(Z_Construct_UClass_ASAiCharacter, &ASAiCharacter::StaticClass, TEXT("/Script/ActionRougueLike"), TEXT("ASAiCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASAiCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
