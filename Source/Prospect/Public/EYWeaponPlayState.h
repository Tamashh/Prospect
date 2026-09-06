#pragma once
#include "CoreMinimal.h"
#include "EYWeaponPlayState.generated.h"

UENUM(BlueprintType)
enum class EYWeaponPlayState : uint8 {
    Invalid,
    Equip,
    Fire,
    FireMiss,
    Unequip,
    Reload,
    StopFire,
    Spinup,
    Use,
    FireTargeting,
    StopFireTargeting,
    ReloadFirstAmmo,
    ReloadLoop,
    ReloadOut,
    ReloadOutEmpty,
    MeleeLight,
    MeleeLightImpact,
    MeleeHeavy,
    MeleeHeavyImpact,
    Inspect,
    MAX,
};

