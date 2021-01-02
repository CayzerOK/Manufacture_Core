// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manufacture_Core/Public/Manufactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManufactory() {}
// Cross Module References
	MANUFACTURE_CORE_API UEnum* Z_Construct_UEnum_Manufacture_Core_EOperations();
	UPackage* Z_Construct_UPackage__Script_Manufacture_Core();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactory_NoRegister();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactory();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_AManufactureSubject();
	GUIS_API UClass* Z_Construct_UClass_UItemBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	MANUFACTURE_CORE_API UEnum* Z_Construct_UEnum_Manufacture_Core_EResourceType();
	MANUFACTURE_CORE_API UClass* Z_Construct_UClass_UResourceItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GUIS_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	static UEnum* EOperations_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Manufacture_Core_EOperations, Z_Construct_UPackage__Script_Manufacture_Core(), TEXT("EOperations"));
		}
		return Singleton;
	}
	template<> MANUFACTURE_CORE_API UEnum* StaticEnum<EOperations>()
	{
		return EOperations_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOperations(EOperations_StaticEnum, TEXT("/Script/Manufacture_Core"), TEXT("EOperations"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Manufacture_Core_EOperations_Hash() { return 3606029622U; }
	UEnum* Z_Construct_UEnum_Manufacture_Core_EOperations()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Manufacture_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOperations"), 0, Get_Z_Construct_UEnum_Manufacture_Core_EOperations_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Decrease", (int64)Decrease },
				{ "Increase", (int64)Increase },
				{ "Multiply", (int64)Multiply },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Decrease.DisplayName", "Decrease" },
				{ "Decrease.Name", "Decrease" },
				{ "Increase.DisplayName", "Increase" },
				{ "Increase.Name", "Increase" },
				{ "ModuleRelativePath", "Public/Manufactory.h" },
				{ "Multiply.DisplayName", "Multiply" },
				{ "Multiply.Name", "Multiply" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Manufacture_Core,
				nullptr,
				"EOperations",
				"EOperations",
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
	void AManufactory::StaticRegisterNativesAManufactory()
	{
		UClass* Class = AManufactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CraftItem", &AManufactory::execCraftItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AManufactory_CraftItem_Statics
	{
		struct Manufactory_eventCraftItem_Parms
		{
			UStruct* ItemStruct;
			UItemBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemStruct;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AManufactory_CraftItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Manufactory_eventCraftItem_Parms, ReturnValue), Z_Construct_UClass_UItemBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AManufactory_CraftItem_Statics::NewProp_ItemStruct = { "ItemStruct", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Manufactory_eventCraftItem_Parms, ItemStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AManufactory_CraftItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManufactory_CraftItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AManufactory_CraftItem_Statics::NewProp_ItemStruct,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManufactory_CraftItem_Statics::Function_MetaDataParams[] = {
		{ "CustomStructureParam", "ItemStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AManufactory_CraftItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManufactory, nullptr, "CraftItem", nullptr, nullptr, sizeof(Manufactory_eventCraftItem_Parms), Z_Construct_UFunction_AManufactory_CraftItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AManufactory_CraftItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AManufactory_CraftItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AManufactory_CraftItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AManufactory_CraftItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AManufactory_CraftItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AManufactory_NoRegister()
	{
		return AManufactory::StaticClass();
	}
	struct Z_Construct_UClass_AManufactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Resources_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Resources;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Resources_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Resources_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Employers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Employers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Employers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Product_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Product;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Product_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManufactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManufactureSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_Manufacture_Core,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AManufactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManufactory_CraftItem, "CraftItem" }, // 12405080
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Manufactory.h" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_MetaData[] = {
		{ "Category", "Manufactory" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Resources = { "Resources", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManufactory, Resources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_Key_KeyProp = { "Resources_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Manufacture_Core_EResourceType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_ValueProp = { "Resources", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UResourceItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::NewProp_Employers_MetaData[] = {
		{ "Category", "Manufactory" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Employers = { "Employers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManufactory, Employers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::NewProp_Employers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::NewProp_Employers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Employers_Inner = { "Employers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::NewProp_Product_MetaData[] = {
		{ "Category", "Manufactory" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Product = { "Product", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManufactory, Product), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::NewProp_Product_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::NewProp_Product_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_Product_Inner = { "Product", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::NewProp_OutputInventory_MetaData[] = {
		{ "Category", "Manufactory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_OutputInventory = { "OutputInventory", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManufactory, OutputInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::NewProp_OutputInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::NewProp_OutputInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManufactory_Statics::NewProp_InputInventory_MetaData[] = {
		{ "Category", "Manufactory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manufactory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AManufactory_Statics::NewProp_InputInventory = { "InputInventory", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManufactory, InputInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::NewProp_InputInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::NewProp_InputInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManufactory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Resources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Resources_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Employers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Employers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Product,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_Product_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_OutputInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManufactory_Statics::NewProp_InputInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManufactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManufactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManufactory_Statics::ClassParams = {
		&AManufactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AManufactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AManufactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManufactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManufactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManufactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManufactory, 2268728477);
	template<> MANUFACTURE_CORE_API UClass* StaticClass<AManufactory>()
	{
		return AManufactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManufactory(Z_Construct_UClass_AManufactory, &AManufactory::StaticClass, TEXT("/Script/Manufacture_Core"), TEXT("AManufactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManufactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
