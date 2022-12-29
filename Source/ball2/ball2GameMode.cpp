// Copyright Epic Games, Inc. All Rights Reserved.

#include "ball2GameMode.h"
#include "ball2Character.h"
#include "UObject/ConstructorHelpers.h"

Aball2GameMode::Aball2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
