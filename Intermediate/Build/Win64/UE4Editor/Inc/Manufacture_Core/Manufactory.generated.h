// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStruct;
class UItemBase;
#ifdef MANUFACTURE_CORE_Manufactory_generated_h
#error "Manufactory.generated.h already included, missing '#pragma once' in Manufactory.h"
#endif
#define MANUFACTURE_CORE_Manufactory_generated_h

#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_SPARSE_DATA
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_RPC_WRAPPERS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_RPC_WRAPPERS_NO_PURE_DECLS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManufactory(); \
	friend struct Z_Construct_UClass_AManufactory_Statics; \
public: \
	DECLARE_CLASS(AManufactory, AManufactureSubject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(AManufactory)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAManufactory(); \
	friend struct Z_Construct_UClass_AManufactory_Statics; \
public: \
	DECLARE_CLASS(AManufactory, AManufactureSubject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(AManufactory)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManufactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManufactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManufactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManufactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManufactory(AManufactory&&); \
	NO_API AManufactory(const AManufactory&); \
public:


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManufactory(AManufactory&&); \
	NO_API AManufactory(const AManufactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManufactory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManufactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AManufactory)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_PRIVATE_PROPERTY_OFFSET
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_25_PROLOG
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_RPC_WRAPPERS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_INCLASS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUFACTURE_CORE_API UClass* StaticClass<class AManufactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Manufactory_h


#define FOREACH_ENUM_EOPERATIONS(op) \
	op(Decrease) \
	op(Increase) \
	op(Multiply) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
