// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MANUFACTURE_CORE_Source_generated_h
#error "Source.generated.h already included, missing '#pragma once' in Source.h"
#endif
#define MANUFACTURE_CORE_Source_generated_h

#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceStruct_Statics; \
	MANUFACTURE_CORE_API static class UScriptStruct* StaticStruct();


template<> MANUFACTURE_CORE_API UScriptStruct* StaticStruct<struct FSourceStruct>();

#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_SPARSE_DATA
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_RPC_WRAPPERS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASource(); \
	friend struct Z_Construct_UClass_ASource_Statics; \
public: \
	DECLARE_CLASS(ASource, AManufactureSubject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(ASource)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASource(); \
	friend struct Z_Construct_UClass_ASource_Statics; \
public: \
	DECLARE_CLASS(ASource, AManufactureSubject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Manufacture_Core"), NO_API) \
	DECLARE_SERIALIZER(ASource)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASource(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASource(ASource&&); \
	NO_API ASource(const ASource&); \
public:


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASource(ASource&&); \
	NO_API ASource(const ASource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASource); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASource)


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InvSubsystem() { return STRUCT_OFFSET(ASource, InvSubsystem); }


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_20_PROLOG
#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_RPC_WRAPPERS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_INCLASS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_PRIVATE_PROPERTY_OFFSET \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_SPARSE_DATA \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_INCLASS_NO_PURE_DECLS \
	THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MANUFACTURE_CORE_API UClass* StaticClass<class ASource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID THProject_Plugins_Manufacture_Core_Source_Manufacture_Core_Public_Source_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
