#pragma once
#include "CoreMinimal.h"
#include "EYNotificationsDisplayType.generated.h"

UENUM(BlueprintType)
enum class EYNotificationsDisplayType : uint8 {
    None,
    StationOnly,
    StationWithPermanence,
    MatchAndStation,
    MAX,
};

