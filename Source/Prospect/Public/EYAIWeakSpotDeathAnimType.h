#pragma once
#include "CoreMinimal.h"
#include "EYAIWeakSpotDeathAnimType.generated.h"

UENUM(BlueprintType)
enum class EYAIWeakSpotDeathAnimType : uint8 {
    None,
    Head,
    TorsoFront,
    TorsoBack,
    ArmLeft,
    ArmRight,
    LegLeft,
    LegRight,
};

