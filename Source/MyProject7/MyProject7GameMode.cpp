// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyProject7GameMode.h"
#include "MyProject7Character.h"
#include "UObject/ConstructorHelpers.h"

AMyProject7GameMode::AMyProject7GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
