// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougueLike/Public/SBlackHole.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBlackHole() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBlackHole_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBlackHole();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBaseProjectile();
	UPackage* Z_Construct_UPackage__Script_ActionRougueLike();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBlackHole::execFireImpulse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireImpulse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASBlackHole::execDistruggiAttore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DistruggiAttore();
		P_NATIVE_END;
	}
	void ASBlackHole::StaticRegisterNativesASBlackHole()
	{
		UClass* Class = ASBlackHole::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DistruggiAttore", &ASBlackHole::execDistruggiAttore },
			{ "FireImpulse", &ASBlackHole::execFireImpulse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBlackHole, nullptr, "DistruggiAttore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBlackHole_DistruggiAttore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBlackHole_DistruggiAttore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBlackHole, nullptr, "FireImpulse", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBlackHole_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBlackHole_FireImpulse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBlackHole_NoRegister()
	{
		return ASBlackHole::StaticClass();
	}
	struct Z_Construct_UClass_ASBlackHole_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceStrength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceStrength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeOfLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeOfLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpulseTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ImpulseTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBlackHole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASBaseProjectile,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBlackHole_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBlackHole_DistruggiAttore, "DistruggiAttore" }, // 70649502
		{ &Z_Construct_UFunction_ASBlackHole_FireImpulse, "FireImpulse" }, // 1118632208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBlackHole_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SBlackHole.h" },
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBlackHole_Statics::NewProp_RadialForce_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBlackHole_Statics::NewProp_RadialForce = { "RadialForce", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBlackHole, RadialForce), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBlackHole_Statics::NewProp_RadialForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::NewProp_RadialForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBlackHole_Statics::NewProp_ForceStrength_MetaData[] = {
		{ "Category", "BlackHole Params" },
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBlackHole_Statics::NewProp_ForceStrength = { "ForceStrength", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBlackHole, ForceStrength), METADATA_PARAMS(Z_Construct_UClass_ASBlackHole_Statics::NewProp_ForceStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::NewProp_ForceStrength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBlackHole_Statics::NewProp_TimeOfLive_MetaData[] = {
		{ "Category", "BlackHole Params" },
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBlackHole_Statics::NewProp_TimeOfLive = { "TimeOfLive", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBlackHole, TimeOfLive), METADATA_PARAMS(Z_Construct_UClass_ASBlackHole_Statics::NewProp_TimeOfLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::NewProp_TimeOfLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBlackHole_Statics::NewProp_ImpulseTime_MetaData[] = {
		{ "Category", "BlackHole Params" },
		{ "ModuleRelativePath", "Public/SBlackHole.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBlackHole_Statics::NewProp_ImpulseTime = { "ImpulseTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBlackHole, ImpulseTime), METADATA_PARAMS(Z_Construct_UClass_ASBlackHole_Statics::NewProp_ImpulseTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::NewProp_ImpulseTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBlackHole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBlackHole_Statics::NewProp_RadialForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBlackHole_Statics::NewProp_ForceStrength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBlackHole_Statics::NewProp_TimeOfLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBlackHole_Statics::NewProp_ImpulseTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBlackHole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBlackHole>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBlackHole_Statics::ClassParams = {
		&ASBlackHole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBlackHole_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBlackHole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBlackHole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBlackHole()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBlackHole_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBlackHole, 895649318);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<ASBlackHole>()
	{
		return ASBlackHole::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBlackHole(Z_Construct_UClass_ASBlackHole, &ASBlackHole::StaticClass, TEXT("/Script/ActionRougueLike"), TEXT("ASBlackHole"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBlackHole);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
