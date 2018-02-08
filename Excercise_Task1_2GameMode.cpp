// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Excercise_Task1_2GameMode.h"
#include "Excercise_Task1_2Character.h"
#include "UObject/ConstructorHelpers.h"

AExcercise_Task1_2GameMode::AExcercise_Task1_2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/BluePrintPawn"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
