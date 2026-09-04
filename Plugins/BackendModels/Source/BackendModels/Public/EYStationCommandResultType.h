#pragma once
#include "CoreMinimal.h"
#include "EYStationCommandResultType.generated.h"

UENUM(BlueprintType)
enum class EYStationCommandResultType : uint8 {
    UNKNOWN_ERROR,
    OK,
    SHUTDOWN,
};

