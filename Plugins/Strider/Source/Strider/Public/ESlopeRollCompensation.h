#pragma once
#include "CoreMinimal.h"
#include "ESlopeRollCompensation.generated.h"

UENUM(BlueprintType)
enum class ESlopeRollCompensation : uint8 {
    None,
    AdjustHips,
    AdjustFeet,
};

