// Copyright Epic Games, Inc. All Rights Reserved.

#include "audio_recorder.h"

#define LOCTEXT_NAMESPACE "Faudio_recorderModule"

void Faudio_recorderModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void Faudio_recorderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(Faudio_recorderModule, audio_recorder)