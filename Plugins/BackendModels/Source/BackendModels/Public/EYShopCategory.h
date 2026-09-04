#pragma once
#include "CoreMinimal.h"
#include "EYShopCategory.generated.h"

UENUM(BlueprintType)
enum class EYShopCategory : uint8 {
    None,
    Special,
    Daily,
    Weekly,
    HardCurrency,
    FounderPacks,
    SeasonPass,
    MAX,
};

