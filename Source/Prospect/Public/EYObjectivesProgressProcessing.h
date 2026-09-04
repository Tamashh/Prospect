#pragma once
#include "CoreMinimal.h"
#include "EYObjectivesProgressProcessing.generated.h"

UENUM(BlueprintType)
enum class EYObjectivesProgressProcessing : uint8 {
    Invalid,
    Sequential,
    Parallel,
    MAX,
};

