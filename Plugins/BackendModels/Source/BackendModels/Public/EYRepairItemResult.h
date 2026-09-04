#pragma once
#include "CoreMinimal.h"
#include "EYRepairItemResult.generated.h"

UENUM(BlueprintType)
enum class EYRepairItemResult : uint8 {
    UNKNOWN_ERROR,
    OK,
    NOT_ENOUGH_RESOURCES,
    PLAYER_INVENTORY_NOT_FOUND,
    WRONG_ITEMID,
    WRONG_USERID,
    MAX,
};

