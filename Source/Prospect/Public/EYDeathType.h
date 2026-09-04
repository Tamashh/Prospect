#pragma once
#include "CoreMinimal.h"
#include "EYDeathType.generated.h"

UENUM(BlueprintType)
enum class EYDeathType : uint8 {
    Normal,
    PlayerExecutionWhileDBNO,
    Exploding,
};

