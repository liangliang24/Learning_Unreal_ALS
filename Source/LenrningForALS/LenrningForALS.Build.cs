// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LenrningForALS : ModuleRules
{
	public LenrningForALS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
