#include "DevMode_API.h"

#define LOCTEXT_NAMESPACE "FDevMode_APIModule"

void FDevMode_APIModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
}

void FDevMode_APIModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FDevMode_APIModule, DevMode_API)