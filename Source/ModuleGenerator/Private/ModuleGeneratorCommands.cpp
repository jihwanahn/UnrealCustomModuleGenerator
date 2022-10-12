// Developed by Jihwan Ahn from KETI

#include "ModuleGeneratorCommands.h"

#define LOCTEXT_NAMESPACE "FModuleGeneratorModule"

void FModuleGeneratorCommands::RegisterCommands()
{
	UI_COMMAND(OpenModuleGeneratorTool, "Module Generator", "Bring up ModuleGenerator window", EUserInterfaceActionType::Button, FInputGesture());
}