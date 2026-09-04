#pragma once
#include "CoreMinimal.h"
#include "EYPickupType.generated.h"

UENUM(BlueprintType)
enum class EYPickupType : uint8 {
    None,
    Currency,
    CurrencyBox,
    CurrencyPlayerDrop,
    Crafting,
    Weapon,
    Ability,
    Ammo,
    HuntItem,
    TrackingItem,
    LootCrate,
    Vehicle,
    Consumable,
    AmmoPlayerDrop,
    Collectible,
    QuestItem,
    Shield,
    Helmet,
    MAX,
};

