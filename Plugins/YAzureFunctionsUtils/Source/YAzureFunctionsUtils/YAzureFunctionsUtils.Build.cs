using UnrealBuildTool;

public class YAzureFunctionsUtils : ModuleRules {
    public YAzureFunctionsUtils(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BackendModels",
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemPlayfab",
        });
    }
}
