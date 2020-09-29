// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "Developers_ToolkitStyle.h"

class FDevelopers_ToolkitCommands : public TCommands<FDevelopers_ToolkitCommands>
{
public:

	FDevelopers_ToolkitCommands()
		: TCommands<FDevelopers_ToolkitCommands>(TEXT("Developers_Toolkit"), NSLOCTEXT("Contexts", "Developers_Toolkit", "Developers_Toolkit Plugin"), NAME_None, FDevelopers_ToolkitStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};