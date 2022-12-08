// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIO_RECORDER_AudioRecorder_generated_h
#error "AudioRecorder.generated.h already included, missing '#pragma once' in AudioRecorder.h"
#endif
#define AUDIO_RECORDER_AudioRecorder_generated_h

#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_SPARSE_DATA
#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopCapture); \
	DECLARE_FUNCTION(execStartCapture);


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioRecorder(); \
	friend struct Z_Construct_UClass_UAudioRecorder_Statics; \
public: \
	DECLARE_CLASS(UAudioRecorder, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/audio_recorder"), NO_API) \
	DECLARE_SERIALIZER(UAudioRecorder)


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAudioRecorder(); \
	friend struct Z_Construct_UClass_UAudioRecorder_Statics; \
public: \
	DECLARE_CLASS(UAudioRecorder, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/audio_recorder"), NO_API) \
	DECLARE_SERIALIZER(UAudioRecorder)


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioRecorder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioRecorder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRecorder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioRecorder(UAudioRecorder&&); \
	NO_API UAudioRecorder(const UAudioRecorder&); \
public:


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAudioRecorder(UAudioRecorder&&); \
	NO_API UAudioRecorder(const UAudioRecorder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioRecorder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioRecorder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioRecorder)


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_14_PROLOG
#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_SPARSE_DATA \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_RPC_WRAPPERS \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_INCLASS \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_SPARSE_DATA \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIO_RECORDER_API UClass* StaticClass<class UAudioRecorder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
