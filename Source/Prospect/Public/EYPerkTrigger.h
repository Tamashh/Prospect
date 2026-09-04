#pragma once
#include "CoreMinimal.h"
#include "EYPerkTrigger.generated.h"

UENUM(BlueprintType)
enum class EYPerkTrigger : uint8 {
    GameplayAttribute,
    AlwaysOn,
    OnHit,
    OnKill,
    OnBeingHit,
    OnTargeting,
    OnWeaponSwitch,
    OnSprinting,
    OnFalling,
    OnDealingDamageModification,
    OnHealthChanged,
    OnTargetingAndFalling,
    OnSpinUp,
    OnMeleeLight,
    OnMeleeHeavy,
    OnStormActive,
};

