#pragma once
#include "CoreMinimal.h"
#include "EYWeaponVisualState.generated.h"

UENUM(BlueprintType)
enum class EYWeaponVisualState : uint8 {
    Normal,
    PendingTransportRelease,
};

