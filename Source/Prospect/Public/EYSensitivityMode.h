#pragma once
#include "CoreMinimal.h"
#include "EYSensitivityMode.generated.h"

UENUM(BlueprintType)
enum class EYSensitivityMode : uint8 {
    Regular,
    AimingDownSights,
    Scoped,
    PerScope,
};

