#pragma once
#include "CoreMinimal.h"
#include "EYPerkBool.generated.h"

UENUM(BlueprintType)
enum class EYPerkBool : uint8 {
    None,
    LessThan,
    LessThanOrEqualTo,
    EqualTo,
    GreaterThanOrEqualTo,
    GreaterThan,
};

