#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSessionMatchState.generated.h"

UENUM(BlueprintType)
enum class EYPlayerSessionMatchState : uint8 {
    Invalid,
    Match,
    Escape,
    Pending = 4,
};

