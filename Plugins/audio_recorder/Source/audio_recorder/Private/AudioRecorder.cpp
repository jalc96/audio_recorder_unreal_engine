// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioRecorder.h"

// Sets default values for this component's properties
UAudioRecorder::UAudioRecorder()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAudioRecorder::BeginPlay()
{
	Super::BeginPlay();

	if (FVoiceModule::IsAvailable()) {
		UE_LOG(LogTemp, Display, TEXT("FVoiceModule is available"));
		VoiceCapture = FVoiceModule::Get().CreateVoiceCapture("");

		if (VoiceCapture.IsValid()) {
			UE_LOG(LogTemp, Display, TEXT("VoiceCapture created"));
		} else {
			UE_LOG(LogTemp, Warning, TEXT("VoiceCapture not created"));
		}
	} else {
		UE_LOG(LogTemp, Warning, TEXT("FVoiceModule is not available"));
	}

}


// Called every frame
void UAudioRecorder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (VoiceCapture->IsCapturing()) {
		UE_LOG(LogTemp, Display, TEXT("VoiceCapture capturing"));
		UE_LOG(LogTemp, Display, TEXT("buffer size: %d"), VoiceCapture->GetBufferSize());
	} else {
		UE_LOG(LogTemp, Warning, TEXT("VoiceCapture not capturing"));
	}

}

bool UAudioRecorder::StartCapture() {
	UE_LOG(LogTemp, Warning, TEXT("start capture"));
	bool result;

	if (VoiceCapture.IsValid()) {
		UE_LOG(LogTemp, Display, TEXT("VoiceCapture valid"));
		result = VoiceCapture->Start();
	} else {
		UE_LOG(LogTemp, Warning, TEXT("VoiceCapture not valid"));
		result = false;
	}

	return result;
}

void UAudioRecorder::StopCapture() {
	UE_LOG(LogTemp, Warning, TEXT("stop capture"));

	if (!VoiceCapture.IsValid()) {
		UE_LOG(LogTemp, Warning, TEXT("VoiceCapture not valid"));
		return;
	}

	UE_LOG(LogTemp, Display, TEXT("VoiceCapture valid"));

	uint32 BufferSize = 0;
	EVoiceCaptureState::Type CaptureState = VoiceCapture->GetCaptureState(BufferSize);


	if (CaptureState == EVoiceCaptureState::Ok && BufferSize > 0) {
		UE_LOG(LogTemp, Error, TEXT("Voice buffer size: %d"), BufferSize);
	}

	VoiceCapture->Stop();
}
