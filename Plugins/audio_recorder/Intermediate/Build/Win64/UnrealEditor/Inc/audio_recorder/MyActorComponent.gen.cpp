// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "audio_recorder/Public/MyActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyActorComponent() {}
// Cross Module References
	AUDIO_RECORDER_API UClass* Z_Construct_UClass_UMyActorComponent_NoRegister();
	AUDIO_RECORDER_API UClass* Z_Construct_UClass_UMyActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_audio_recorder();
// End Cross Module References
	DEFINE_FUNCTION(UMyActorComponent::execStopCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyActorComponent::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartCapture();
		P_NATIVE_END;
	}
	void UMyActorComponent::StaticRegisterNativesUMyActorComponent()
	{
		UClass* Class = UMyActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCapture", &UMyActorComponent::execStartCapture },
			{ "StopCapture", &UMyActorComponent::execStopCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics
	{
		struct MyActorComponent_eventStartCapture_Parms
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
	void Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyActorComponent_eventStartCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyActorComponent_eventStartCapture_Parms), &Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyActorComponent, nullptr, "StartCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::MyActorComponent_eventStartCapture_Parms), Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyActorComponent_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyActorComponent_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyActorComponent, nullptr, "StopCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyActorComponent_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyActorComponent_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyActorComponent);
	UClass* Z_Construct_UClass_UMyActorComponent_NoRegister()
	{
		return UMyActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMyActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_audio_recorder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyActorComponent_StartCapture, "StartCapture" }, // 3742745252
		{ &Z_Construct_UFunction_UMyActorComponent_StopCapture, "StopCapture" }, // 3185768675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyActorComponent.h" },
		{ "ModuleRelativePath", "Public/MyActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyActorComponent_Statics::ClassParams = {
		&UMyActorComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyActorComponent()
	{
		if (!Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton, Z_Construct_UClass_UMyActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyActorComponent.OuterSingleton;
	}
	template<> AUDIO_RECORDER_API UClass* StaticClass<UMyActorComponent>()
	{
		return UMyActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyActorComponent);
	struct Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_MyActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_MyActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyActorComponent, UMyActorComponent::StaticClass, TEXT("UMyActorComponent"), &Z_Registration_Info_UClass_UMyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyActorComponent), 2560628686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_MyActorComponent_h_2194132667(TEXT("/Script/audio_recorder"),
		Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_MyActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProject7_Plugins_audio_recorder_Source_audio_recorder_Public_MyActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
