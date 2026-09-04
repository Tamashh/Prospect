#pragma once
#include "CoreMinimal.h"
#include "EYVanityUpdateResult.generated.h"

UENUM(BlueprintType)
enum class EYVanityUpdateResult : uint8 {
    OK,
    INVALID_ID,
    INCOMPATIBLE_ITEM,
    TOO_FEW_OWNED_ITEMS,
    UNKNOWN_ERROR,
};

