#pragma once
#include "CoreMinimal.h"
#include "EYTechTreeNodePerkType.generated.h"

UENUM(BlueprintType)
enum class EYTechTreeNodePerkType : uint8 {
    None,
    IncreaseStashSize,
    IncreaseBagSize,
    PassiveKMarkGenHour,
    PassiveAurumGenDay,
    IncreasePassiveKMarkGenCap,
    IncreasePassiveAurumGenCap,
    DailyCrate,
    ReduceUpgradingTimePerc,
    MAX,
};

