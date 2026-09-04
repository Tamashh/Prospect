#pragma once
#include "CoreMinimal.h"
#include "EYVehicleStateType.generated.h"

UENUM(BlueprintType)
enum class EYVehicleStateType : uint8 {
    Invalid,
    Landing,
    Possesed,
    Idle,
    Destroyed,
};

