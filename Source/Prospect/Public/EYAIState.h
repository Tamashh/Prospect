#pragma once
#include "CoreMinimal.h"
#include "EYAIState.generated.h"

UENUM(BlueprintType)
enum class EYAIState : uint8 {
    None,
    Idle,
    Investigate,
    Combat,
    Reseting,
    Dead,
    Suspicious,
    Resting,
    Test,
};

