#pragma once
#include "CoreMinimal.h"
#include "EYProspectorLevelRewardType.generated.h"

UENUM(BlueprintType)
enum class EYProspectorLevelRewardType : uint8 {
    None,
    Border,
    Icon,
    BorderAndIcon,
};

