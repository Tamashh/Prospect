#pragma once
#include "CoreMinimal.h"
#include "EYMuteResult.generated.h"

UENUM(BlueprintType)
enum class EYMuteResult : uint8 {
    OK,
    NOT_ADMIN,
    INVALID_REASON,
    UNKNOWN,
};

