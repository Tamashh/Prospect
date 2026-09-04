#pragma once
#include "CoreMinimal.h"
#include "EYItemTooltipType.generated.h"

UENUM(BlueprintType)
enum class EYItemTooltipType : uint8 {
    None,
    Weapon,
    Ability,
    Gadget,
    Kit,
    Mod,
    Vanity,
    Material,
    Blueprint,
    Consumable,
};

