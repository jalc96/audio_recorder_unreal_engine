// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject7 : ModuleRules
{
	public MyProject7(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
