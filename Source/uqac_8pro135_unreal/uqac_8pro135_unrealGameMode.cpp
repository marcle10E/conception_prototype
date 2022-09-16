// Copyright Epic Games, Inc. All Rights Reserved.

#include "uqac_8pro135_unrealGameMode.h"
#include "uqac_8pro135_unrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

Auqac_8pro135_unrealGameMode::Auqac_8pro135_unrealGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
