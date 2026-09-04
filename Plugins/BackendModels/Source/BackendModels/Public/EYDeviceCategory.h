#pragma once
#include "CoreMinimal.h"
#include "EYDeviceCategory.generated.h"

UENUM(BlueprintType)
enum class EYDeviceCategory : uint8 {
    AssaultRifle,
    Pistol,
    SMG,
    SniperRifle,
    HeavyWeapon,
    Shotgun,
    BurstRifle,
    Exotic,
    MissileLauncher,
    Scanner,
    All,
    INVALID,
    MAX,
};

