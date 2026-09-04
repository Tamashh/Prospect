#pragma once
#include "CoreMinimal.h"
#include "EYPlatformTypes.generated.h"

UENUM(BlueprintType)
enum class EYPlatformTypes : uint8 {
    INTERNAL,
    EGS,
    PLAYFAB = 3,
    UNITIALIZED,
};

