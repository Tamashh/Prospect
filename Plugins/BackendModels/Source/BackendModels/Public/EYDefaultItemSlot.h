#pragma once
#include "CoreMinimal.h"
#include "EYDefaultItemSlot.generated.h"

UENUM(BlueprintType)
enum class EYDefaultItemSlot : uint8 {
    Unassigned,
    StarterWeapon,
    Gadget,
    Kit,
    Ability0,
    Ability1,
    Ability2,
    Ability3,
    Consumable0,
    Consumable1,
    Consumable2,
    Consumable3,
    Device0,
    Device1,
    Device2,
    Device3,
    Miscellaneous0,
    Miscellaneous1,
    Miscellaneous2,
    Miscellaneous3,
    Shield,
};

