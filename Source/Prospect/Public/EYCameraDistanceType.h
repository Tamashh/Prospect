#pragma once
#include "CoreMinimal.h"
#include "EYCameraDistanceType.generated.h"

UENUM(BlueprintType)
enum class EYCameraDistanceType : uint8 {
    None,
    Close,
    Middle,
    Far,
};

