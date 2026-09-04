#pragma once
#include "CoreMinimal.h"
#include "EYClimbingStateInternal.generated.h"

UENUM(BlueprintType)
enum class EYClimbingStateInternal : uint8 {
    None,
    MovingUp,
    MovingForward,
    MovingDown,
};

