using UnrealBuildTool;

public class YPlayfabServices : ModuleRules {
    public YPlayfabServices(ReadOnlyTargetRules Target) : base(Target) {
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
