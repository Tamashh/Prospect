#pragma once
#include "CoreMinimal.h"
#include "EYVehicleSoundType.generated.h"

UENUM(BlueprintType)
enum class EYVehicleSoundType : uint8 {
    Movement,
    Boost,
    Idle,
};

