#pragma once
#include "CoreMinimal.h"
#include "EYPlayerMatchState.generated.h"

UENUM(BlueprintType)
enum class EYPlayerMatchState : uint8 {
    MatchLevelsLoaded,
    ReadiedUp,
    InMatch,
    FinishedMatch,
    InEndOfMatch,
};

