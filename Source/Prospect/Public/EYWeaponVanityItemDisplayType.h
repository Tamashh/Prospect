#pragma once
#include "CoreMinimal.h"
#include "EYWeaponVanityItemDisplayType.generated.h"

UENUM(BlueprintType)
enum class EYWeaponVanityItemDisplayType : uint8 {
    Invalid,
    CanBeApplied,
    UsedOnSpecificItem,
    IsLocked,
};

