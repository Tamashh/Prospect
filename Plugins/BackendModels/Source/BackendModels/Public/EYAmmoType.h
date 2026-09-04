#pragma once
#include "CoreMinimal.h"
#include "EYAmmoType.generated.h"

UENUM(BlueprintType)
enum class EYAmmoType : uint8 {
    None,
    Bullet,
    Beam,
    Gauss,
    Explosives,
    EnergyLight,
    EnergyHeavy,
    Shard,
    Missiles,
    Needler,
    PrototypeCategory_01,
    PrototypeCategory_02,
    PrototypeCategory_03,
    PrototypeCategory_04,
    Overheat,
    All,
    MAX,
};

