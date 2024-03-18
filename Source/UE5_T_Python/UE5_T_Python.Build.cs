// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class UE5_T_Python : ModuleRules
{
    public UE5_T_Python(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bUseRTTI = true;
        bEnableExceptions = true;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] {  });

        PrivateIncludePaths.Add(Path.Combine(ModuleDirectory, "../UE5_T_Python/thirdparty/pybind11/include"));

        string python_path = @"D:\Programs\Python312\";
        PrivateIncludePaths.Add(Path.Combine(python_path, "include"));
        PublicAdditionalLibraries.Add(Path.Combine(python_path, "libs", "python312.lib"));
        //PublicDelayLoadDLLs.Add("python312.dll");

        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
