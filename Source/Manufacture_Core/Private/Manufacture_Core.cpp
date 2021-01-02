// Copyright Epic Games, Inc. All Rights Reserved.

#include "Manufacture_Core.h"

#define LOCTEXT_NAMESPACE "FManufacture_CoreModule"

void FManufacture_CoreModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FManufacture_CoreModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FManufacture_CoreModule, Manufacture_Core)