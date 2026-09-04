#pragma once
#include "CoreMinimal.h"
#include "EYSplineMovementInitBPType.generated.h"

UENUM(BlueprintType)
enum class EYSplineMovementInitBPType : uint8 {
    NONE,
    SplineComponentSet,
    MovementActorSet,
    MAX,
};

