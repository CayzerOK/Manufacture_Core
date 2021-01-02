// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/Relation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelation() {}
// Cross Module References
	MANUFACTURE_CORE_API UEnum* Z_Construct_UEnum_Manufacture_Core_ERelationType();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
	MANUFACTURE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FRelation();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactureSubject_NoRegister();
// End Cross Module References
	static UEnum* ERelationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Manufacture_Core_ERelationType, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("ERelationType"));
		}
		return Singleton;
	}
	template<> MANUFACTURE_CORE_API UEnum* StaticEnum<ERelationType>()
	{
		return ERelationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERelationType(ERelationType_StaticEnum, TEXT("/Script/Manufacture_Core"), TEXT("ERelationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Manufacture_Core_ERelationType_Hash() { return 2183783353U; }
	UEnum* Z_Construct_UEnum_Manufacture_Core_ERelationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERelationType"), 0, Get_Z_Construct_UEnum_Manufacture_Core_ERelationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Income", (int64)Income },
				{ "Outcome", (int64)Outcome },
				{ "Link", (int64)Link },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Income.DisplayName", "Income" },
				{ "Income.Name", "Income" },
				{ "Link.DisplayName", "TwoWay" },
				{ "Link.Name", "Link" },
				{ "ModuleRelativePath", "Public/Relation.h" },
				{ "Outcome.DisplayName", "Outcome" },
				{ "Outcome.Name", "Outcome" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Manufacture_Core,
				nullptr,
				"ERelationType",
				"ERelationType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRelation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANUFACTURE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FRelation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRelation, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("Relation"), sizeof(FRelation), Get_Z_Construct_UScriptStruct_FRelation_Hash());
	}
	return Singleton;
}
template<> MANUFACTURE_CORE_API UScriptStruct* StaticStruct<FRelation>()
{
	return FRelation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRelation(FRelation::StaticStruct, TEXT("/Script/Manufacture_Core"), TEXT("Relation"), false, nullptr, nullptr);
static struct FScriptStruct_Manufacture_Core_StaticRegisterNativesFRelation
{
	FScriptStruct_Manufacture_Core_StaticRegisterNativesFRelation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Relation")),new UScriptStruct::TCppStructOps<FRelation>);
	}
} ScriptStruct_Manufacture_Core_StaticRegisterNativesFRelation;
	struct Z_Construct_UScriptStruct_FRelation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemTypes;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Performance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Performance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Relation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRelation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRelation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes_MetaData[] = {
		{ "Category", "Relation" },
		{ "ModuleRelativePath", "Public/Relation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes = { "ItemTypes", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelation, ItemTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes_Inner = { "ItemTypes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Performance_MetaData[] = {
		{ "Category", "Relation" },
		{ "ModuleRelativePath", "Public/Relation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Performance = { "Performance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelation, Performance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Performance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Performance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Relation" },
		{ "ModuleRelativePath", "Public/Relation.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelation, Type), Z_Construct_UEnum_Manufacture_Core_ERelationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "Relation" },
		{ "ModuleRelativePath", "Public/Relation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelation, Target), Z_Construct_UClass_AManufactureSubject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRelation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelation_Statics::NewProp_ItemTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Performance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelation_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRelation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
		nullptr,
		&NewStructOps,
		"Relation",
		sizeof(FRelation),
		alignof(FRelation),
		Z_Construct_UScriptStruct_FRelation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRelation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRelation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRelation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Relation"), sizeof(FRelation), Get_Z_Construct_UScriptStruct_FRelation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRelation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRelation_Hash() { return 2739723090U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
