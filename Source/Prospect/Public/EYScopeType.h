#pragma once
#include "CoreMinimal.h"
#include "EYScopeType.generated.h"

UENUM(BlueprintType)
enum class EYScopeType : uint8 {
    None,
    ADS,
    TwoTimes,
    FourTimes,
    SixTimes,
    EightTimes,
    MAX,
};

