#pragma once
#include "CoreMinimal.h"
#include "EYBlueprintCraftingPriceType.generated.h"

UENUM(BlueprintType)
enum class EYBlueprintCraftingPriceType : uint8 {
    Material,
    Currency,
    Invalid,
};

