#pragma once
#include "CoreMinimal.h"
#include "EYContractDifficulty.generated.h"

UENUM(BlueprintType)
enum class EYContractDifficulty : uint8 {
    Invalid,
    Easy,
    Medium,
    Hard,
    MAX,
};

