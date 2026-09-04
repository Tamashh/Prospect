#pragma once
#include "CoreMinimal.h"
#include "EYRewardType.generated.h"

UENUM(BlueprintType)
enum class EYRewardType : uint8 {
    None,
    Currency,
    Material,
    Reputation,
    SeasonXP,
    ProspectorLevel,
    Ammo,
    Weapon,
    Consumable,
    Armor,
    Bag,
    MAX,
};

