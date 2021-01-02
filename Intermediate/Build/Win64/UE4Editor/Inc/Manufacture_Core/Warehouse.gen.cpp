// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/Warehouse.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarehouse() {}
// Cross Module References
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AWarehouse_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AWarehouse();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
	GUIS_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	void AWarehouse::StaticRegisterNativesAWarehouse()
	{
	}
	UClass* Z_Construct_UClass_AWarehouse_NoRegister()
	{
		return AWarehouse::StaticClass();
	}
	struct Z_Construct_UClass_AWarehouse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWarehouse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Warehouse.h" },
		{ "ModuleRelativePath", "Public/Warehouse.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWarehouse_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Warehouse.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWarehouse_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWarehouse, Content), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::NewProp_Content_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWarehouse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWarehouse_Statics::NewProp_Content,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWarehouse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarehouse>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWarehouse_Statics::ClassParams = {
		&AWarehouse::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWarehouse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWarehouse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWarehouse()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWarehouse_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWarehouse, 2722774069);
	template<> MANUFACTURE_CORE_API UClass* StaticClass<AWarehouse>()
	{
		return AWarehouse::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWarehouse(Z_Construct_UClass_AWarehouse, &AWarehouse::StaticClass, TEXT("/Script/Manufacture_Core"), TEXT("AWarehouse"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWarehouse);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
