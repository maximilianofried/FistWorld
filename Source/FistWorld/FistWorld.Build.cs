// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FistWorld : ModuleRules
{
	public FistWorld(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
