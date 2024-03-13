// Copyright Epic Games, Inc. All Rights Reserved.

#include "RadicalAIMadnessGameMode.h"
#include "RadicalAIMadnessCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARadicalAIMadnessGameMode::ARadicalAIMadnessGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
