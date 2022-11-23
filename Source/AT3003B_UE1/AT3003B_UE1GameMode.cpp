// Copyright Epic Games, Inc. All Rights Reserved.

#include "AT3003B_UE1GameMode.h"
#include "AT3003B_UE1Character.h"
#include "UObject/ConstructorHelpers.h"

AAT3003B_UE1GameMode::AAT3003B_UE1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
