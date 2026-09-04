#pragma once
#include "CoreMinimal.h"
#include "EYInventoryPlayerTypes.generated.h"

UENUM(BlueprintType)
enum class EYInventoryPlayerTypes : uint8 {
    Undefined,
    Stash,
    Set,
    Inventory,
    Info,
};

