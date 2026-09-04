#pragma once
#include "CoreMinimal.h"
#include "EYSortingMethod.generated.h"

UENUM(BlueprintType)
enum class EYSortingMethod : uint8 {
    Alphabetical,
    Rarity,
    ItemType,
    Priority,
    Count,
};

