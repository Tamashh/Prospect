#pragma once
#include "CoreMinimal.h"
#include "EYPlayerRewardSource.generated.h"

UENUM(BlueprintType)
enum class EYPlayerRewardSource : uint8 {
    IN_GAME,
    END_OF_MATCH,
    BASE,
    VICTORY_POINTS_MULTIPLIER,
    EVACUATION,
    SCOREBOARD_PLACEMENT,
    MISSION,
    GRANTS,
    DIED,
    MAX,
};

