#pragma once
#include "CoreMinimal.h"
#include "EYTurretState.generated.h"

UENUM(BlueprintType)
enum class EYTurretState : uint8 {
    Deploying,
    Active,
    Destroyed,
};

