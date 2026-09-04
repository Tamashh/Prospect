#pragma once
#include "CoreMinimal.h"
#include "EYMatchState.generated.h"

UENUM(BlueprintType)
enum class EYMatchState : uint8 {
    EnteringMap,
    WaitingToStart,
    PreMatch,
    LaunchingMatch,
    SeamlessTravel,
    MatchIntro,
    MatchInProgress,
    MatchEnding,
    MatchOver,
    DisconnectedPlayers,
    LeavingMap,
    None,
};

