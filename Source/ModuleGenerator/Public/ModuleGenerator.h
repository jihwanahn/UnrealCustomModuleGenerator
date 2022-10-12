// Developed by Jihwan Ahn from KETI

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FModuleGeneratorModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	
	TSharedPtr<class FUICommandList> PluginCommands;
	bool WindowCreated = false;
	void OnOpenTool();
	void RegisterMenus();
	void ToolWindowClosed(const TSharedRef<SWindow>&);
};
