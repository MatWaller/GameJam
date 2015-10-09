// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Game_Jam.h"
#include "Game_JamGameMode.h"
#include "Game_JamCharacter.h"

AGame_JamGameMode::AGame_JamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
