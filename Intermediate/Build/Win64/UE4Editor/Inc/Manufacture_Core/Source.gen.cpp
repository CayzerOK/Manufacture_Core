// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/Source.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSource() {}
// Cross Module References
	MANUFACTURE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FSourceStruct();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_ASource_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_ASource();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactureSubject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	GUIS_API UClass* Z_Construct_UClass_UInventorySubsystem_NoRegister();
// End Cross Module References
class UScriptStruct* FSourceStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANUFACTURE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FSourceStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSourceStruct, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("SourceStruct"), sizeof(FSourceStruct), Get_Z_Construct_UScriptStruct_FSourceStruct_Hash());
	}
	return Singleton;
}
template<> MANUFACTURE_CORE_API UScriptStruct* StaticStruct<FSourceStruct>()
{
	return FSourceStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSourceStruct(FSourceStruct::StaticStruct, TEXT("/Script/Manufacture_Core"), TEXT("SourceStruct"), false, nullptr, nullptr);
static struct FScriptStruct_Manufacture_Core_StaticRegisterNativesFSourceStruct
{
	FScriptStruct_Manufacture_Core_StaticRegisterNativesFSourceStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SourceStruct")),new UScriptStruct::TCppStructOps<FSourceStruct>);
	}
} ScriptStruct_Manufacture_Core_StaticRegisterNativesFSourceStruct;
	struct Z_Construct_UScriptStruct_FSourceStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSourceStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Source.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSourceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSourceStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSourceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
		nullptr,
		&NewStructOps,
		"SourceStruct",
		sizeof(FSourceStruct),
		alignof(FSourceStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSourceStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSourceStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSourceStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSourceStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SourceStruct"), sizeof(FSourceStruct), Get_Z_Construct_UScriptStruct_FSourceStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSourceStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSourceStruct_Hash() { return 2339800460U; }
	void ASource::StaticRegisterNativesASource()
	{
	}
	UClass* Z_Construct_UClass_ASource_NoRegister()
	{
		return ASource::StaticClass();
	}
	struct Z_Construct_UClass_ASource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SourceItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvSubsystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InvSubsystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManufactureSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Source.h" },
		{ "ModuleRelativePath", "Public/Source.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASource_Statics::NewProp_SourceItem_MetaData[] = {
		{ "Category", "Source" },
		{ "ModuleRelativePath", "Public/Source.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASource_Statics::NewProp_SourceItem = { "SourceItem", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASource, SourceItem), Z_Construct_UClass_UItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASource_Statics::NewProp_SourceItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASource_Statics::NewProp_SourceItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASource_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Source" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Source.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASource_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASource, Content), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASource_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASource_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASource_Statics::NewProp_InvSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Source.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASource_Statics::NewProp_InvSubsystem = { "InvSubsystem", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASource, InvSubsystem), Z_Construct_UClass_UInventorySubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASource_Statics::NewProp_InvSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASource_Statics::NewProp_InvSubsystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASource_Statics::NewProp_SourceItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASource_Statics::NewProp_Content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASource_Statics::NewProp_InvSubsystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASource_Statics::ClassParams = {
		&ASource::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASource_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASource, 1360050114);
	template<> MANUFACTURE_CORE_API UClass* StaticClass<ASource>()
	{
		return ASource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASource(Z_Construct_UClass_ASource, &ASource::StaticClass, TEXT("/Script/Manufacture_Core"), TEXT("ASource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
