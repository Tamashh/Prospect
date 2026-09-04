#pragma once
#include "CoreMinimal.h"
#include "EYMapMarkerState.generated.h"

UENUM(BlueprintType)
enum class EYMapMarkerState : uint8 {
    INACTIVE,
    ACTIVE,
    POSTLOBBY,
    DESTROYED,
    HIDDEN,
    REMOVED,
    ACTIVE_ANIMATED,
    MAX,
};

