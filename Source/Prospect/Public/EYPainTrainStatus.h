#pragma once
#include "CoreMinimal.h"
#include "EYPainTrainStatus.generated.h"

UENUM(BlueprintType)
enum class EYPainTrainStatus : uint8 {
    Captured,
    Lost,
    Finished,
};

