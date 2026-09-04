#pragma once
#include "CoreMinimal.h"
#include "EYAuthorizationUsageType.generated.h"

UENUM(BlueprintType)
enum class EYAuthorizationUsageType : uint8 {
    Internal,
    Steam,
    EGS,
    Playfab,
    Custom,
};

