// Developed by Jihwan Ahn from KETI

#pragma once

#include "CoreMinimal.h"

#include "ModuleGeneratorStyle.h"
/**
 * 
 */
class FModuleGeneratorCommands : public TCommands<FModuleGeneratorCommands>
{
public:
	FModuleGeneratorCommands()
		: TCommands<FModuleGeneratorCommands>(TEXT("ModuleGenerator"), NSLOCTEXT("Contexts", "ModuleGenerator", "ModuleGenerator Plugin"), NAME_None, FModuleGeneratorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;
	
	TSharedPtr<FUICommandInfo> OpenModuleGeneratorTool;
};
