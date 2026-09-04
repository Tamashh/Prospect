#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.generated.h"

UENUM(BlueprintType)
enum class EYCustomizationBodyType : uint8 {
    INVALID,
    MaleDefault,
    FemaleDefault,
    Both,
};

