#pragma once
#include "CoreMinimal.h"
#include "EYObstacleType.generated.h"

UENUM(BlueprintType)
enum class EYObstacleType : uint8 {
    None,
    WaistHigh,
    ShoulderHigh,
    AboveHead,
    Max,
};

