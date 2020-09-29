#pragma once

#include "Modules/ModuleManager.h"

class FDevMode_APIModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
