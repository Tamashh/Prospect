#pragma once
#include "CoreMinimal.h"
#include "EYCommWheelEntryTutorialSetting.generated.h"

UENUM(BlueprintType)
enum class EYCommWheelEntryTutorialSetting : uint8 {
    Always,
    ShowOnlyInTutorial,
    HideInTutorial,
};

