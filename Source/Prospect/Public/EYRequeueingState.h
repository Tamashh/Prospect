#pragma once
#include "CoreMinimal.h"
#include "EYRequeueingState.generated.h"

UENUM(BlueprintType)
enum class EYRequeueingState : uint8 {
    NoRequeuing,
    WaitingForPremadeTeammates,
    NotMatchmaking,
    Matchmaking,
    PlayerMatched,
};

