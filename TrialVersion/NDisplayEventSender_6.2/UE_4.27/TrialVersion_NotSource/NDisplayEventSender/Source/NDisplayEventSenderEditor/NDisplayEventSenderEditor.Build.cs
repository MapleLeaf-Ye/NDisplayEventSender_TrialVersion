// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NDisplayEventSenderEditor : ModuleRules
{
	public NDisplayEventSenderEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		bUsePrecompiled = true;
		PrecompileForTargets = PrecompileTargetsType.None;
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"NDisplayEventSender",
				// ... add other public dependencies that you statically link with here ...
			}
			);

		if (Target.bBuildEditor == true)
		{
			PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"BlueprintGraph",
				"KismetCompiler",
				"UnrealEd",
				"ToolMenus",
                "Projects",
            }
			);
		}

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				
				"Engine",
				"Slate",
				"SlateCore",
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
