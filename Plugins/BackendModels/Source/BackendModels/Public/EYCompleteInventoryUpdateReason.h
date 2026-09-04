#pragma once
#include "CoreMinimal.h"
#include "EYCompleteInventoryUpdateReason.generated.h"

UENUM(BlueprintType)
enum class EYCompleteInventoryUpdateReason : uint8 {
    NONE,
    UI_DRAG,
    ITEM_STATE_CHANGED,
    END_OF_MATCH_ESCAPED,
    END_OF_MATCH_DIED,
    CHEAT,
    INVENTORY_OVERFLOW,
    MAX,
};

