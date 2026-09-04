#pragma once
#include "CoreMinimal.h"
#include "EYTravelInstanceType.generated.h"

UENUM(BlueprintType)
enum class EYTravelInstanceType : uint8 {
    Invalid,
    Match,
    Station,
};

