#pragma once
#include "CoreMinimal.h"
#include "EYStatValueDisplayMethod.generated.h"

UENUM(BlueprintType)
enum class EYStatValueDisplayMethod : uint8 {
    NONE,
    INT,
    DECIMAL,
    PERCENTAGE,
    MAX,
};

