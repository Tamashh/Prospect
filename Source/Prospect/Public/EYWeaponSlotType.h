#pragma once
#include "CoreMinimal.h"
#include "EYWeaponSlotType.generated.h"

UENUM(BlueprintType)
enum class EYWeaponSlotType : uint8 {
    Starter,
    Primary,
    Invalid,
};

