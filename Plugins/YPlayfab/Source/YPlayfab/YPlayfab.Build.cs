using UnrealBuildTool;

public class YPlayfab : ModuleRules {
    public YPlayfab(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "BackendModels",
            "Core",
            "CoreUObject",
            "Engine",
            "OnlineSubsystemPlayfab",
            "YOnlineSubsystemUtilsPlugin",
            "YPlayfabServices",
        });
    }
}
