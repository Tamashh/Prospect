#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.generated.h"

UENUM(BlueprintType)
enum class EYItemRarityType : uint8 {
    Invalid,
    Common,
    Uncommon,
    Rare,
    Epic,
    Exotic,
    Legendary,
    MAX,
};

