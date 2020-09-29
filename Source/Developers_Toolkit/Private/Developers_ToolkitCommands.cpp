// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Developers_ToolkitCommands.h"

#define LOCTEXT_NAMESPACE "FDevelopers_ToolkitModule"

void FDevelopers_ToolkitCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Play DevMode", "Play in Development Mode", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
