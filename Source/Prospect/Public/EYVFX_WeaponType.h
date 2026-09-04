#pragma once
#include "CoreMinimal.h"
#include "EYVFX_WeaponType.generated.h"

UENUM(BlueprintType)
enum class EYVFX_WeaponType : uint8 {
    None,
    Pistol,
    SMG,
    LMG,
    Assault,
    SemiAuto,
    Shotgun,
};

