// Copyright Epic Games, Inc. All Rights Reserved.

#include "FistWorldGameMode.h"
#include "FistWorldHUD.h"
#include "FistWorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFistWorldGameMode::AFistWorldGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFistWorldHUD::StaticClass();
}
