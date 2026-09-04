#pragma once
#include "CoreMinimal.h"
#include "EYStatValueComparison.generated.h"

UENUM(BlueprintType)
enum class EYStatValueComparison : uint8 {
    NONE,
    LOWER_IS_BETTER,
    HIGHER_IS_BETTER,
    MAX,
};

