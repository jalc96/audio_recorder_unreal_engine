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

	// VoiceCapture = IVoiceCapture();
	
}


// Called every frame
void UAudioRecorder::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

bool UAudioRecorder::StartCapture() {
	UE_LOG(LogTemp, Warning, TEXT("start capture"));
	bool result = VoiceCapture->Start();
	return result;
}

void UAudioRecorder::StopCapture() {
	UE_LOG(LogTemp, Warning, TEXT("stop capture"));
}
