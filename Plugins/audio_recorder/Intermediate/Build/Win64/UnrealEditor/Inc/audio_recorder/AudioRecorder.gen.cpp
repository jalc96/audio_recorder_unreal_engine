// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "audio_recorder/Public/AudioRecorder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioRecorder() {}
// Cross Module References
	AUDIO_RECORDER_API UClass* Z_Construct_UClass_UAudioRecorder_NoRegister();
	AUDIO_RECORDER_API UClass* Z_Construct_UClass_UAudioRecorder();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_audio_recorder();
// End Cross Module References
	DEFINE_FUNCTION(UAudioRecorder::execStopCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAudioRecorder::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCapture();
		P_NATIVE_END;
	}
	void UAudioRecorder::StaticRegisterNativesUAudioRecorder()
	{
		UClass* Class = UAudioRecorder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCapture", &UAudioRecorder::execStartCapture },
			{ "StopCapture", &UAudioRecorder::execStopCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics
	{
		struct AudioRecorder_eventStartCapture_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioRecorder_eventStartCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AudioRecorder_eventStartCapture_Parms), &Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRecorder, nullptr, "StartCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::AudioRecorder_eventStartCapture_Parms), Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRecorder_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRecorder_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AudioRecorder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioRecorder, nullptr, "StopCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioRecorder_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioRecorder_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioRecorder);
	UClass* Z_Construct_UClass_UAudioRecorder_NoRegister()
	{
		return UAudioRecorder::StaticClass();
	}
	struct Z_Construct_UClass_UAudioRecorder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioRecorder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_audio_recorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioRecorder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioRecorder_StartCapture, "StartCapture" }, // 3214494907
		{ &Z_Construct_UFunction_UAudioRecorder_StopCapture, "StopCapture" }, // 3587645621
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioRecorder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AudioRecorder.h" },
		{ "ModuleRelativePath", "Public/AudioRecorder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioRecorder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioRecorder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioRecorder_Statics::ClassParams = {
		&UAudioRecorder::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioRecorder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioRecorder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioRecorder()
	{
		if (!Z_Registration_Info_UClass_UAudioRecorder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioRecorder.OuterSingleton, Z_Construct_UClass_UAudioRecorder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioRecorder.OuterSingleton;
	}
	template<> AUDIO_RECORDER_API UClass* StaticClass<UAudioRecorder>()
	{
		return UAudioRecorder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioRecorder);
	struct Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioRecorder, UAudioRecorder::StaticClass, TEXT("UAudioRecorder"), &Z_Registration_Info_UClass_UAudioRecorder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioRecorder), 5971552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_1996437660(TEXT("/Script/audio_recorder"),
		Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_AudioRecorder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
