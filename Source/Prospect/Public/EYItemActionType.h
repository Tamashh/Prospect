#pragma once
#include "CoreMinimal.h"
#include "EYItemActionType.generated.h"

UENUM(BlueprintType)
enum class EYItemActionType : uint8 {
    None,
    Equip,
    CloseEquip,
    Unequip,
    Scrap,
    Craft,
    CancelCrafting,
    GoToItemDetails,
    Purchase,
    PurchasePending,
    MAX,
};

