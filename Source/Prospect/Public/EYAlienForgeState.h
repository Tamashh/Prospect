#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeState.generated.h"

UENUM(BlueprintType)
enum class EYAlienForgeState : uint8 {
    None,
    Inactive,
    Idle,
    Forging,
    ForgingCompleted,
};

