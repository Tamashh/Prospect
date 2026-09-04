#pragma once
#include "CoreMinimal.h"
#include "EYSeasonWipeCheckResult.generated.h"

UENUM(BlueprintType)
enum class EYSeasonWipeCheckResult : uint8 {
    Invalid,
    NoSeasonWipeNeeded,
    SeasonWipeCompleted,
    SeasonWipeInProgress,
    SeasonWipeCheckFailure,
};

