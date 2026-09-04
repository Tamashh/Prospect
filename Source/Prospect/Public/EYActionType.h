#pragma once
#include "CoreMinimal.h"
#include "EYActionType.generated.h"

UENUM(BlueprintType)
enum class EYActionType : uint8 {
    Invalid,
    Kills,
    Contracts,
    Evac,
    FactionLevelUp,
    PlayerQuartersUpgradeFinished,
    TechtreeNodeUpgradeFinished,
    MAX,
};

