#pragma once
#include "CoreMinimal.h"
#include "EYWeaponTransportHitResultType.generated.h"

UENUM(BlueprintType)
enum class EYWeaponTransportHitResultType : uint8 {
    NormalBehavior,
    NoImpactRetrace,
    NotifyTransportComponentIgnoreImpact,
    ImpactRetrace,
};

