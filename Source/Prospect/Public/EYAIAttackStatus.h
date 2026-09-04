#pragma once
#include "CoreMinimal.h"
#include "EYAIAttackStatus.generated.h"

UENUM(BlueprintType)
enum class EYAIAttackStatus : uint8 {
    Running,
    Finished,
    Cancelled,
};

