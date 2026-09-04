#pragma once
#include "CoreMinimal.h"
#include "EYAIBehaviorReaction.generated.h"

UENUM(BlueprintType)
enum class EYAIBehaviorReaction : uint8 {
    None,
    Rotate,
    LowFeedback,
    HighFeedback,
    Investigate,
};

