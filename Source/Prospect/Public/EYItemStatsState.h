#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsState.generated.h"

UENUM(BlueprintType)
enum class EYItemStatsState : uint8 {
    Invalid,
    Basic,
    Detailed,
};

