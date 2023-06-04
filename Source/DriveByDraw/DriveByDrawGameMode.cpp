// Copyright Epic Games, Inc. All Rights Reserved.

#include "DriveByDrawGameMode.h"
#include "DriveByDrawHUD.h"
#include "DriveByDrawCharacter.h"
#include "DrivePlayerController.h"
#include "Driver.h"
#include "UObject/ConstructorHelpers.h"

ADriveByDrawGameMode::ADriveByDrawGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));

	
	//DefaultPawnClass = PlayerPawnClassFinder.Class;
	DefaultPawnClass = ADriver::StaticClass();

	PlayerControllerClass = ADrivePlayerController::StaticClass();
	// use our custom HUD class
	HUDClass = ADriveByDrawHUD::StaticClass();
}
