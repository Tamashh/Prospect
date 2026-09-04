#pragma once
#include "CoreMinimal.h"
#include "EYEndOfMatchView.generated.h"

UENUM(BlueprintType)
enum class EYEndOfMatchView : uint8 {
    None,
    EscapeSequence,
    DeathCamera,
    Spectating,
    Results,
    Rewards,
};

