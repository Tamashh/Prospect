#pragma once
#include "CoreMinimal.h"
#include "EYMatchMapDifficulty.generated.h"

UENUM(BlueprintType)
enum class EYMatchMapDifficulty : uint8 {
    Invalid,
    Unknown,
    VeryEasy,
    Easy,
    Normal,
    Hard,
    VeryHard,
    Extreme,
    MAX,
};

