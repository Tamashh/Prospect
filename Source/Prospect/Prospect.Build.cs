using UnrealBuildTool;

public class Prospect : ModuleRules {
    public Prospect(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "ApexDestruction",
            "AudioExtensions",
            "Backend",
            "BackendModels",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "GameplayAbilities",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "NavigationSystem",
            "PhysicsCore",
            "Ping",
            "ReplicationGraph",
            "ScreenSystem",
            "SignalR",
            "Slate",
            "SlateCore",
            "UMG",
            "WebBrowserWidget",
            "YAzureFunctionsUtils",
            "YBattleEye",
            "YChatFilteringPlugin",
            "YEzProfile",
            "YGameAnalytics",
            "YInitializationPlugin",
            "YOnlineSubsystemUtilsPlugin",
            "YPlatformUtils",
            "YPlayfab",
            "YSocialCompatibilityPlugin",
            "YStateMachineModule",
        });

        if (Target.bBuildEditor) {
            PrivateDependencyModuleNames.Add("Water");
        }
    }
}
