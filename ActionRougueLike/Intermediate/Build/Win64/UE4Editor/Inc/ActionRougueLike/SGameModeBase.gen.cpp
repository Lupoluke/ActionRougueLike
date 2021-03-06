// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougueLike/Public/SGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameModeBase() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASGameModeBase_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ActionRougueLike();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvQueryStatus();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQuery_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASGameModeBase::execOnQueryCompleted)
	{
		P_GET_OBJECT(UEnvQueryInstanceBlueprintWrapper,Z_Param_QueryInstance);
		P_GET_PROPERTY(FByteProperty,Z_Param_QueryStatus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQueryCompleted(Z_Param_QueryInstance,EEnvQueryStatus::Type(Z_Param_QueryStatus));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASGameModeBase::execSpawnBotTimerElapsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnBotTimerElapsed();
		P_NATIVE_END;
	}
	void ASGameModeBase::StaticRegisterNativesASGameModeBase()
	{
		UClass* Class = ASGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQueryCompleted", &ASGameModeBase::execOnQueryCompleted },
			{ "SpawnBotTimerElapsed", &ASGameModeBase::execSpawnBotTimerElapsed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics
	{
		struct SGameModeBase_eventOnQueryCompleted_Parms
		{
			UEnvQueryInstanceBlueprintWrapper* QueryInstance;
			TEnumAsByte<EEnvQueryStatus::Type> QueryStatus;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QueryInstance;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QueryStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::NewProp_QueryInstance = { "QueryInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnQueryCompleted_Parms, QueryInstance), Z_Construct_UClass_UEnvQueryInstanceBlueprintWrapper_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::NewProp_QueryStatus = { "QueryStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SGameModeBase_eventOnQueryCompleted_Parms, QueryStatus), Z_Construct_UEnum_AIModule_EEnvQueryStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::NewProp_QueryInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::NewProp_QueryStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "OnQueryCompleted", nullptr, nullptr, sizeof(SGameModeBase_eventOnQueryCompleted_Parms), Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASGameModeBase, nullptr, "SpawnBotTimerElapsed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASGameModeBase_NoRegister()
	{
		return ASGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBotQuery_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBotQuery;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnTimerInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnTimerInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DifficultyCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DifficultyCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinionClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MinionClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASGameModeBase_OnQueryCompleted, "OnQueryCompleted" }, // 1668524261
		{ &Z_Construct_UFunction_ASGameModeBase_SpawnBotTimerElapsed, "SpawnBotTimerElapsed" }, // 3354423567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "SGameModeBase.h" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//query system\n" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
		{ "ToolTip", "query system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnBotQuery = { "SpawnBotQuery", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, SpawnBotQuery), Z_Construct_UClass_UEnvQuery_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnBotQuery_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnTimerInterval = { "SpawnTimerInterval", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, SpawnTimerInterval), METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnTimerInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//curve float\n" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
		{ "ToolTip", "curve float" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve = { "DifficultyCurve", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, DifficultyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/SGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass = { "MinionClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASGameModeBase, MinionClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnBotQuery,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_SpawnTimerInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_DifficultyCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASGameModeBase_Statics::NewProp_MinionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASGameModeBase_Statics::ClassParams = {
		&ASGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASGameModeBase, 609817359);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<ASGameModeBase>()
	{
		return ASGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASGameModeBase(Z_Construct_UClass_ASGameModeBase, &ASGameModeBase::StaticClass, TEXT("/Script/ActionRougueLike"), TEXT("ASGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
