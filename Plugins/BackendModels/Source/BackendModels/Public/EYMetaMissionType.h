#pragma once
#include "CoreMinimal.h"
#include "EYMetaMissionType.generated.h"

UENUM(BlueprintType)
enum class EYMetaMissionType : uint8 {
    Mission,
    DailyChallenge,
    WeeklyChallenge,
    SeasonChallenge,
    RepeatedDaily,
    ShowcaseTitle,
    PersistentChallenge,
    None,
};

