// Copyright 2018, Colby Hall. All Rights Reserved.

#include "IGameMode.h"
#include "ICharacter.h"
#include "IPlayerController.h"
#include "IHUD.h"

AIGameMode::AIGameMode()
{
	DefaultPawnClass = AICharacter::StaticClass();
	PlayerControllerClass = AIPlayerController::StaticClass();
	HUDClass = AIHUD::StaticClass();
}

