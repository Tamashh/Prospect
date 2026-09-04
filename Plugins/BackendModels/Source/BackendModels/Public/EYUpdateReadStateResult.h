#pragma once
#include "CoreMinimal.h"
#include "EYUpdateReadStateResult.generated.h"

UENUM(BlueprintType)
enum class EYUpdateReadStateResult : uint8 {
    OK,
    INVALID_ID,
    NO_UPDATE,
    UNKNOWN_ERROR,
};

