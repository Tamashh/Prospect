#pragma once
#include "CoreMinimal.h"
#include "EYAbilityState.generated.h"

UENUM(BlueprintType)
enum class EYAbilityState : uint8 {
    Invalid,
    Ready,
    SpinningUp,
    Activating,
    Active,
    Finished,
    Cooldown,
};

