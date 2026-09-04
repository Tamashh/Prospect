#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.generated.h"

UENUM(BlueprintType)
enum class EYSquadActionResult : uint8 {
    OK,
    INVALID_TARGET,
    TARGET_OFFLINE,
    INITIATOR_OFFLINE,
    INVALID_SQUAD,
    SQUAD_FULL,
    INVALID_SQUAD_INVITE,
    INTERNAL_ERROR,
    SQUAD_DISBANDED,
    NO_LEADER,
    IN_MATCH,
};

