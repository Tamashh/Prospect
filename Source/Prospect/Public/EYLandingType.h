#pragma once
#include "CoreMinimal.h"
#include "EYLandingType.generated.h"

UENUM(BlueprintType)
enum class EYLandingType : uint8 {
    Soft,
    Medium,
    Hard,
};

