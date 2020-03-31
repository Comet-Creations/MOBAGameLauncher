// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "MOBAGameGameMode.h"
#include "MOBAGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMOBAGameGameMode::AMOBAGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
