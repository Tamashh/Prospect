#pragma once
#include "CoreMinimal.h"
#include "EYLerpBehavior.generated.h"

UENUM(BlueprintType)
enum class EYLerpBehavior : uint8 {
    Constant,
    MaxToNone,
    NoneToMax,
    IntervalLerp,
    Blinking,
};

