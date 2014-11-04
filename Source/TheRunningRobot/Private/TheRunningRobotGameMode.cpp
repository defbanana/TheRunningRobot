// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "TheRunningRobot.h"
#include "TheRunningRobotGameMode.h"
#include "TheRunningRobotPlayerController.h"
#include "TheRunningRobotCharacter.h"

ATheRunningRobotGameMode::ATheRunningRobotGameMode(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP)
{
	// use our custom PlayerController class
	PlayerControllerClass = ATheRunningRobotPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}