#pragma once
#include "CoreMinimal.h"
#include "EYOverrideShowWeapon.generated.h"

UENUM(BlueprintType)
enum class EYOverrideShowWeapon : uint8 {
    DontChangeDefaultWeaponSetting,
    OverrideWithShowWeapon,
    OverrideWithHideWeapon,
};

