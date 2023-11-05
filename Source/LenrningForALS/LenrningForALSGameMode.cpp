// Copyright Epic Games, Inc. All Rights Reserved.

#include "LenrningForALSGameMode.h"
#include "LenrningForALSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALenrningForALSGameMode::ALenrningForALSGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/AdvancedLocomotionV4/Blueprints/CharacterLogic/ALS_AnimMan_CharacterBP"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
