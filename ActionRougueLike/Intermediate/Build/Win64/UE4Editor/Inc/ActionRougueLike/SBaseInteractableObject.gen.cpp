// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionRougueLike/Public/InteractableObject/SBaseInteractableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSBaseInteractableObject() {}
// Cross Module References
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBaseInteractableObject_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_ASBaseInteractableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ActionRougueLike();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ACTIONROUGUELIKE_API UClass* Z_Construct_UClass_USGameplayInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASBaseInteractableObject::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void ASBaseInteractableObject::StaticRegisterNativesASBaseInteractableObject()
	{
		UClass* Class = ASBaseInteractableObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &ASBaseInteractableObject::execBeginPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "ModuleRelativePath", "Public/InteractableObject/SBaseInteractableObject.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASBaseInteractableObject, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASBaseInteractableObject_NoRegister()
	{
		return ASBaseInteractableObject::StaticClass();
	}
	struct Z_Construct_UClass_ASBaseInteractableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeToRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeToRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereOverlap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereOverlap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASBaseInteractableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionRougueLike,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASBaseInteractableObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASBaseInteractableObject_BeginPlay, "BeginPlay" }, // 1851733474
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseInteractableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObject/SBaseInteractableObject.h" },
		{ "ModuleRelativePath", "Public/InteractableObject/SBaseInteractableObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_BaseMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableObject/SBaseInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseInteractableObject, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_BaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_BaseMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_TimeToRespawn_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/InteractableObject/SBaseInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_TimeToRespawn = { "TimeToRespawn", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseInteractableObject, TimeToRespawn), METADATA_PARAMS(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_TimeToRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_TimeToRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_SphereOverlap_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableObject/SBaseInteractableObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_SphereOverlap = { "SphereOverlap", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASBaseInteractableObject, SphereOverlap), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_SphereOverlap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_SphereOverlap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASBaseInteractableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_BaseMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_TimeToRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASBaseInteractableObject_Statics::NewProp_SphereOverlap,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASBaseInteractableObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(ASBaseInteractableObject, ISGameplayInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASBaseInteractableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASBaseInteractableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASBaseInteractableObject_Statics::ClassParams = {
		&ASBaseInteractableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASBaseInteractableObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseInteractableObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASBaseInteractableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASBaseInteractableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASBaseInteractableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASBaseInteractableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASBaseInteractableObject, 3825607547);
	template<> ACTIONROUGUELIKE_API UClass* StaticClass<ASBaseInteractableObject>()
	{
		return ASBaseInteractableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASBaseInteractableObject(Z_Construct_UClass_ASBaseInteractableObject, &ASBaseInteractableObject::StaticClass, TEXT("/Script/ActionRougueLike"), TEXT("ASBaseInteractableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASBaseInteractableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
