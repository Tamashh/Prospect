#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsCategory.generated.h"

UENUM(BlueprintType)
enum class EYItemStatsCategory : uint8 {
    None,
    Weapon,
    Gadget,
    Ability,
    Mod,
    MeleeWeapon,
};

