#pragma once
#include "CoreMinimal.h"
#include "EYAISpawnContexts.generated.h"

UENUM(BlueprintType)
enum class EYAISpawnContexts : uint8 {
    Normal,
    Stormy,
    Thunderous,
    Hunt,
    Weak,
    Alpha,
    Season,
};

