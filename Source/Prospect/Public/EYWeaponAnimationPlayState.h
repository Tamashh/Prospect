#pragma once
#include "CoreMinimal.h"
#include "EYWeaponAnimationPlayState.generated.h"

UENUM(BlueprintType)
enum class EYWeaponAnimationPlayState : uint8 {
    None,
    FirstPerson,
    ThirdPerson,
    Weapon,
    WeaponThirdPerson,
};

