#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.generated.h"

UENUM(BlueprintType)
enum class EYCustomizationCategory : uint8 {
    Invalid,
    None,
    CharacterDefault,
    Head,
    Boots,
    Chest,
    BaseSuit,
    Gloves,
    WeaponPreview,
    Emote,
    WeaponNear,
    WeaponDefault,
    WeaponFar,
    WeaponCharm,
    KitPreview,
    CategoryPlaceholder12,
    CategoryPlaceholder13,
    Archetype,
    MeleeWeapon,
    Overview,
    Banner,
    Spray,
    Item,
    Vehicle,
    Droppod,
};

