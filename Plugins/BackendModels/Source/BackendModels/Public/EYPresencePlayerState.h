#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.generated.h"

UENUM(BlueprintType)
enum class EYPresencePlayerState : uint8 {
    IN_STATION,
    IN_MATCH,
    UNKNOWN,
};

