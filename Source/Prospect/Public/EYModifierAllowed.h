#pragma once
#include "CoreMinimal.h"
#include "EYModifierAllowed.generated.h"

UENUM(BlueprintType)
enum class EYModifierAllowed : uint8 {
    All,
    OnlyAdditions,
    OnlyMultipliers,
};

