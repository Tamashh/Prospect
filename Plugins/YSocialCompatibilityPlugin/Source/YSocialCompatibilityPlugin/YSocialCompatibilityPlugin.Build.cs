using UnrealBuildTool;

public class YSocialCompatibilityPlugin : ModuleRules {
    public YSocialCompatibilityPlugin(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BackendModels",
            "Core",
            "CoreUObject",
            "Engine",
        });
    }
}
