#pragma once
#include "CoreMinimal.h"
#include "EYOfferRarity.generated.h"

UENUM(BlueprintType)
enum class EYOfferRarity : uint8 {
    Invalid,
    Common,
    Uncommon,
    Rare,
    MAX,
};

