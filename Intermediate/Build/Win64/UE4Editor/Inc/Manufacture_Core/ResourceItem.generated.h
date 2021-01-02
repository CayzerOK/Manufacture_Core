// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANUFACTURE_CORE_ResourceItem_generated_h
#error "ResourceItem.generated.h already included, missing '#pragma once' in ResourceItem.h"
#endif
#define MANUFACTURE_CORE_ResourceItem_generated_h

#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatInfo_Statics; \
	MANUFACTURE_CORE_API static class UScriptStruct* StaticStruct();


template<> MANUFACTURE_CORE_API UScriptStruct* StaticStruct<struct FStatInfo>();

#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_SPARSE_DATA
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_RPC_WRAPPERS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResourceItem(); \
	friend struct Z_Construct_UClass_UResourceItem_Statics; \
public: \
	DECLARE_CLASS(UResourceItem, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(UResourceItem)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUResourceItem(); \
	friend struct Z_Construct_UClass_UResourceItem_Statics; \
public: \
	DECLARE_CLASS(UResourceItem, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(UResourceItem)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResourceItem(UResourceItem&&); \
	NO_API UResourceItem(const UResourceItem&); \
public:


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResourceItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResourceItem(UResourceItem&&); \
	NO_API UResourceItem(const UResourceItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResourceItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResourceItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResourceItem)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_PRIVATE_PROPERTY_OFFSET
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_36_PROLOG
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_RPC_WRAPPERS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_INCLASS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUFACTURE_CORE_API UClass* StaticClass<class UResourceItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_ResourceItem_h


#define FOREACH_ENUM_ERESOURCETYPE(op) \
	op(ToolHeadResource) \
	op(ToolBindResource) \
	op(ToolHandleResource) \
	op(ArmorCoverResource) \
	op(ArmorInnerResource) \
	op(ArmorSupportResource) \
	op(ClothResource) \
	op(StitchResource) \
	op(BowLimbResource) \
	op(AdditionalResource0) \
	op(AdditionalResource1) \
	op(AdditionalResource2) \
	op(AdditionalResource3) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
