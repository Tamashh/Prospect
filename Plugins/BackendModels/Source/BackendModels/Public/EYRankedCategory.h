#pragma once
#include "CoreMinimal.h"
#include "EYRankedCategory.generated.h"

UENUM(BlueprintType)
enum class EYRankedCategory : uint8 {
    None,
    Solo,
    Duo,
    Squad,
    Rewards,
    MAX,
};

