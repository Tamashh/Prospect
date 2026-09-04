#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingResult.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingResult : uint8 {
    OK,
    ALREADY_IN_QUEUE,
    ALREADY_IN_ROOM,
    NOT_IN_MATCHMAKING,
    CANCELED,
    NO_GAME_MODE,
    GAME_MODE_INACTIVE,
    UNKNOWN_REGION,
    CHANGED_REGIONS,
};

