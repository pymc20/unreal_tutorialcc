// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "tutorial_ccGameMode.h"
#include "tutorial_ccHUD.h"
#include "tutorial_ccCharacter.h"
#include "UObject/ConstructorHelpers.h"

Atutorial_ccGameMode::Atutorial_ccGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Atutorial_ccHUD::StaticClass();
}
