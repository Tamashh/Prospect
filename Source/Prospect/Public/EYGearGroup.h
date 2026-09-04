#pragma once
#include "CoreMinimal.h"
#include "EYGearGroup.generated.h"

UENUM(BlueprintType)
enum class EYGearGroup : uint8 {
    None,
    GearSet,
    Loadout,
    MAX,
};

