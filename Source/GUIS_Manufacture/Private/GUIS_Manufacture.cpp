// Copyright Epic Games, Inc. All Rights Reserved.

#include "GUIS_Manufacture.h"

#define LOCTEXT_NAMESPACE "FGUIS_ManufactureModule"

void FGUIS_ManufactureModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FGUIS_ManufactureModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FGUIS_ManufactureModule, GUIS_Manufacture)