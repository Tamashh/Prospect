#pragma once
#include "CoreMinimal.h"
#include "EYStartItemCraftingResultStatus.generated.h"

UENUM(BlueprintType)
enum class EYStartItemCraftingResultStatus : uint8 {
    UNKNOWN_ERROR,
    OK,
    STASH_FULL,
    NOT_ENOUGH_RESOURCES,
    MAX,
};

