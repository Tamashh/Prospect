#pragma once
#include "CoreMinimal.h"
#include "EYStringVisualizationType.generated.h"

UENUM(BlueprintType)
enum class EYStringVisualizationType : uint8 {
    CHAR_PER_CHAR,
    RANDOM,
    MAX,
};

