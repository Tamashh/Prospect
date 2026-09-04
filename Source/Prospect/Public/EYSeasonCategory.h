#pragma once
#include "CoreMinimal.h"
#include "EYSeasonCategory.generated.h"

UENUM(BlueprintType)
enum class EYSeasonCategory : uint8 {
    SeasonOverview,
    Challenges,
    SeasonChallenges,
    DailyWeeklyChallenges,
};

