#pragma once
#include "CoreMinimal.h"
#include "EYDLSSMode.generated.h"

UENUM(BlueprintType)
enum class EYDLSSMode : uint8 {
    Off,
    Auto,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};
