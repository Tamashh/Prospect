#pragma once
#include "CoreMinimal.h"
#include "ESlopeDetectionMode.generated.h"

UENUM(BlueprintType)
enum class ESlopeDetectionMode : uint8 {
    ManualSlope,
    AutomaticSlope,
};

