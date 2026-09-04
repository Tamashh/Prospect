#pragma once
#include "CoreMinimal.h"
#include "EYPlayFabStoreCategory.generated.h"

UENUM(BlueprintType)
enum class EYPlayFabStoreCategory : uint8 {
    None,
    SpecialOffers,
    SeasonalOffers,
    StarterPacks,
    Aurum,
};

