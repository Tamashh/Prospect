#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.generated.h"

UENUM(BlueprintType)
enum class EYPurchaseWeaponShopItemStatus : uint8 {
    UNKNOWN_ERROR,
    OK,
    NOT_ENOUGH_RESOURCES,
    PLAYER_INVENTORY_NOT_FOUND,
    RECIPE_DATA_NOT_FOUND,
    STASH_FULL,
    WRONG_ITEMID,
    WRONG_USERID,
    WRONG_SHOPITEMBELONGSTO,
    MAX,
};

