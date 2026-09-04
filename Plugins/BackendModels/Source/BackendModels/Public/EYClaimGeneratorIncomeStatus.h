#pragma once
#include "CoreMinimal.h"
#include "EYClaimGeneratorIncomeStatus.generated.h"

UENUM(BlueprintType)
enum class EYClaimGeneratorIncomeStatus : uint8 {
    UNKNOWN_ERROR,
    OK,
    STASH_FULL,
    MAX,
};

