// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AT3003B_UE1 : ModuleRules
{
	public AT3003B_UE1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
