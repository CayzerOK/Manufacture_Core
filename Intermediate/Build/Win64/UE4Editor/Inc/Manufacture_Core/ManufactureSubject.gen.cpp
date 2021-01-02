// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/ManufactureSubject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManufactureSubject() {}
// Cross Module References
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactureSubject_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactureSubject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
// End Cross Module References
	void AManufactureSubject::StaticRegisterNativesAManufactureSubject()
	{
	}
	UClass* Z_Construct_UClass_AManufactureSubject_NoRegister()
	{
		return AManufactureSubject::StaticClass();
	}
	struct Z_Construct_UClass_AManufactureSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManufactureSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactureSubject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ManufactureSubject.h" },
		{ "ModuleRelativePath", "Public/ManufactureSubject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManufactureSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManufactureSubject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManufactureSubject_Statics::ClassParams = {
		&AManufactureSubject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AManufactureSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactureSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManufactureSubject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManufactureSubject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManufactureSubject, 3085339562);
	template<> MANUFACTURE_CORE_API UClass* StaticClass<AManufactureSubject>()
	{
		return AManufactureSubject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManufactureSubject(Z_Construct_UClass_AManufactureSubject, &AManufactureSubject::StaticClass, TEXT("/Script/Manufacture_Core"), TEXT("AManufactureSubject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManufactureSubject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
