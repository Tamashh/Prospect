#include "YDeveloperSettingsFunction.h"

UYDeveloperSettingsFunction::UYDeveloperSettingsFunction() {
}

bool UYDeveloperSettingsFunction::ShouldRepeatCompletedDynamicOnboardingMissions() {
    return false;
}

bool UYDeveloperSettingsFunction::IsBackgroundDropPodEnabled() {
    return false;
}

int32 UYDeveloperSettingsFunction::GetTutorialStartStep() {
    return 0;
}


