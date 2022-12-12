// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
// #include "Voice/Public/VoicePackage.h"
// #include "VoicePackage.h"
// #include "VoicePackage.h"
// #include "Voice/Public/VoiceModule.h"
// #include "VoiceModule.h"
#include "Voice.h"
// #include "Voice/Public/Interfaces/VoiceCapture.h"
#include "Interfaces/VoiceCapture.h"

#include "AudioRecorder.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AUDIO_RECORDER_API UAudioRecorder : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAudioRecorder();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	// IVoiceCapture *VoiceCapture;
	TSharedPtr<IVoiceCapture> VoiceCapture;
	void *dummy;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	bool StartCapture();
	UFUNCTION(BlueprintCallable)
	void StopCapture();

		
};
