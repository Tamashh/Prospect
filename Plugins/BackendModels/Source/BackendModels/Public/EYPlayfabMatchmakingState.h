#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabMatchmakingState.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabMatchmakingState : uint8 {
    Invalid,
    WaitingForPlayers,
    WaitingForMatch,
    WaitingForServer,
    Canceled,
    Matched,
};

