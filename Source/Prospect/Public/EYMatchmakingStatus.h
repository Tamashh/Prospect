#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingStatus.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingStatus : uint8 {
    WaitingForMatchmakingResult,
    TravelingToServer,
    WaitingForServerToSpinUp,
    Failure,
    FailureTimeout,
};

