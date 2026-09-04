using UnrealBuildTool;

public class ProspectGameTarget : TargetRules {
	public ProspectGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Prospect",
		});
	}
}
