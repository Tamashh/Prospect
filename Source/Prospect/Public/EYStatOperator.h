#pragma once
#include "CoreMinimal.h"
#include "EYStatOperator.generated.h"

UENUM(BlueprintType)
enum class EYStatOperator : uint8 {
    NONE,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    LOWEST,
    HIGHEST,
    MAX,
};

