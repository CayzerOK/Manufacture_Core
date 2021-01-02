// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/ResourceItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResourceItem() {}
// Cross Module References
	MANUFACTURE_CORE_API UEnum* Z_Construct_UEnum_Manufacture_Core_EResourceType();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
	MANUFACTURE_CORE_API UScriptStruct* Z_Construct_UScriptStruct_FStatInfo();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_UResourceItem_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_UResourceItem();
	GUIS_API UClass* Z_Construct_UClass_UItemBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	static UEnum* EResourceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Manufacture_Core_EResourceType, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("EResourceType"));
		}
		return Singleton;
	}
	template<> MANUFACTURE_CORE_API UEnum* StaticEnum<EResourceType>()
	{
		return EResourceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EResourceType(EResourceType_StaticEnum, TEXT("/Script/Manufacture_Core"), TEXT("EResourceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Manufacture_Core_EResourceType_Hash() { return 1488030796U; }
	UEnum* Z_Construct_UEnum_Manufacture_Core_EResourceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EResourceType"), 0, Get_Z_Construct_UEnum_Manufacture_Core_EResourceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ToolHeadResource", (int64)ToolHeadResource },
				{ "ToolBindResource", (int64)ToolBindResource },
				{ "ToolHandleResource", (int64)ToolHandleResource },
				{ "ArmorCoverResource", (int64)ArmorCoverResource },
				{ "ArmorInnerResource", (int64)ArmorInnerResource },
				{ "ArmorSupportResource", (int64)ArmorSupportResource },
				{ "ClothResource", (int64)ClothResource },
				{ "StitchResource", (int64)StitchResource },
				{ "BowLimbResource", (int64)BowLimbResource },
				{ "AdditionalResource0", (int64)AdditionalResource0 },
				{ "AdditionalResource1", (int64)AdditionalResource1 },
				{ "AdditionalResource2", (int64)AdditionalResource2 },
				{ "AdditionalResource3", (int64)AdditionalResource3 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AdditionalResource0.DisplayName", "Additional0" },
				{ "AdditionalResource0.Name", "AdditionalResource0" },
				{ "AdditionalResource1.DisplayName", "Additional1" },
				{ "AdditionalResource1.Name", "AdditionalResource1" },
				{ "AdditionalResource2.DisplayName", "Additional2" },
				{ "AdditionalResource2.Name", "AdditionalResource2" },
				{ "AdditionalResource3.DisplayName", "Additional3" },
				{ "AdditionalResource3.Name", "AdditionalResource3" },
				{ "ArmorCoverResource.DisplayName", "ArmorCover" },
				{ "ArmorCoverResource.Name", "ArmorCoverResource" },
				{ "ArmorInnerResource.DisplayName", "ArmorInner" },
				{ "ArmorInnerResource.Name", "ArmorInnerResource" },
				{ "ArmorSupportResource.DisplayName", "ArmorSupport" },
				{ "ArmorSupportResource.Name", "ArmorSupportResource" },
				{ "BlueprintType", "true" },
				{ "BowLimbResource.DisplayName", "BowLimb" },
				{ "BowLimbResource.Name", "BowLimbResource" },
				{ "ClothResource.DisplayName", "Cloth" },
				{ "ClothResource.Name", "ClothResource" },
				{ "ModuleRelativePath", "Public/ResourceItem.h" },
				{ "StitchResource.DisplayName", "Stitch" },
				{ "StitchResource.Name", "StitchResource" },
				{ "ToolBindResource.DisplayName", "ToolBind" },
				{ "ToolBindResource.Name", "ToolBindResource" },
				{ "ToolHandleResource.DisplayName", "ToolHandle" },
				{ "ToolHandleResource.Name", "ToolHandleResource" },
				{ "ToolHeadResource.DisplayName", "ToolHead" },
				{ "ToolHeadResource.Name", "ToolHeadResource" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Manufacture_Core,
				nullptr,
				"EResourceType",
				"EResourceType",
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
class UScriptStruct* FStatInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MANUFACTURE_CORE_API uint32 Get_Z_Construct_UScriptStruct_FStatInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatInfo, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("StatInfo"), sizeof(FStatInfo), Get_Z_Construct_UScriptStruct_FStatInfo_Hash());
	}
	return Singleton;
}
template<> MANUFACTURE_CORE_API UScriptStruct* StaticStruct<FStatInfo>()
{
	return FStatInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatInfo(FStatInfo::StaticStruct, TEXT("/Script/Manufacture_Core"), TEXT("StatInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Manufacture_Core_StaticRegisterNativesFStatInfo
{
	FScriptStruct_Manufacture_Core_StaticRegisterNativesFStatInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatInfo")),new UScriptStruct::TCppStructOps<FStatInfo>);
	}
} ScriptStruct_Manufacture_Core_StaticRegisterNativesFStatInfo;
	struct Z_Construct_UScriptStruct_FStatInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StatMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StatMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_MetaData[] = {
		{ "Category", "StatInfo" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap = { "StatMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatInfo, StatMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_Key_KeyProp = { "StatMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_ValueProp = { "StatMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatInfo_Statics::NewProp_StatMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
		nullptr,
		&NewStructOps,
		"StatInfo",
		sizeof(FStatInfo),
		alignof(FStatInfo),
		Z_Construct_UScriptStruct_FStatInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatInfo"), sizeof(FStatInfo), Get_Z_Construct_UScriptStruct_FStatInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatInfo_Hash() { return 1078848238U; }
	void UResourceItem::StaticRegisterNativesUResourceItem()
	{
	}
	UClass* Z_Construct_UClass_UResourceItem_NoRegister()
	{
		return UResourceItem::StaticClass();
	}
	struct Z_Construct_UClass_UResourceItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ItemStats;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemStats_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemStats_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResourceItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResourceItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ResourceItem.h" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_MetaData[] = {
		{ "Category", "ResourceItem" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats = { "ItemStats", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResourceItem, ItemStats), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_Key_KeyProp = { "ItemStats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Manufacture_Core_EResourceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_ValueProp = { "ItemStats", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FStatInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResourceItem_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "ResourceItem" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResourceItem_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResourceItem, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UResourceItem_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResourceItem_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResourceItem_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "ResourceItem" },
		{ "ModuleRelativePath", "Public/ResourceItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UResourceItem_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UResourceItem, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UResourceItem_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResourceItem_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResourceItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceItem_Statics::NewProp_ItemStats_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceItem_Statics::NewProp_Icon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResourceItem_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResourceItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResourceItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResourceItem_Statics::ClassParams = {
		&UResourceItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResourceItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResourceItem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UResourceItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResourceItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResourceItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResourceItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResourceItem, 739196268);
	template<> MANUFACTURE_CORE_API UClass* StaticClass<UResourceItem>()
	{
		return UResourceItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResourceItem(Z_Construct_UClass_UResourceItem, &UResourceItem::StaticClass, TEXT("/Script/Manufacture_Core"), TEXT("UResourceItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResourceItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
