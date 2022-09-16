// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class uqac_8pro135_unreal : ModuleRules
{
	public uqac_8pro135_unreal(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
