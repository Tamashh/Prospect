#pragma once
#include "CoreMinimal.h"
#include "EYBlueprintAvailability.generated.h"

UENUM(BlueprintType)
enum class EYBlueprintAvailability : uint8 {
    Locked,
    Unlocked,
    Purchasable,
    PurchasePending,
    Obtained,
    Craftable,
    CreatedButNotCraftable,
    CreatedAndCraftable,
    CreatedCraftedCantCraftAgain,
    MAX,
};

