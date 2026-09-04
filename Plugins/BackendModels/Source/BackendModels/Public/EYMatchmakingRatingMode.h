#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingRatingMode.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingRatingMode : uint8 {
    None,
    NVR,
    KDR,
};

