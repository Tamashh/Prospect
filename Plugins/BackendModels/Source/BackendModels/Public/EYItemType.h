#pragma once
#include "CoreMinimal.h"
#include "EYItemType.generated.h"

UENUM(BlueprintType)
enum class EYItemType : uint8 {
    None,
    Device,
    Ability,
    Kit,
    Consumable,
    Mod,
    Blueprint,
    Material,
    Miscellaneous,
    Currency,
    Vanity,
    Experience,
    Lore,
    Vehicle,
    Ammo,
    Collectible,
    QuestItem,
    Shield,
    ProspectorBadge,
    TechTreeNode,
    PlayerQuartersLevel,
    PassiveGenerator,
    Bag,
    Helmet,
    Key,
    MeleeWeapon,
    Map,
    All,
    MAX,
};

