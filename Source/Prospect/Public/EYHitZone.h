#pragma once
#include "CoreMinimal.h"
#include "EYHitZone.generated.h"

UENUM(BlueprintType)
enum class EYHitZone : uint8 {
    None,
    Default,
    Head,
    ArmRight,
    ArmLeft,
    LegRight,
    LegLeft,
};

