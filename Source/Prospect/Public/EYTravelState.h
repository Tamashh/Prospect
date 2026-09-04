#pragma once
#include "CoreMinimal.h"
#include "EYTravelState.generated.h"

UENUM(BlueprintType)
enum class EYTravelState : uint8 {
    None,
    PendingSession,
    ServerValdiation,
    ResourceCleanup,
    Travel,
    PendingServerTravel,
    Failure,
    Success,
};

