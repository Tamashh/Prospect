#pragma once
#include "CoreMinimal.h"
#include "EYClaimGrantResult.generated.h"

UENUM(BlueprintType)
enum class EYClaimGrantResult : uint8 {
    OK,
    INVALID_ID,
    ALREADY_CLAIMED,
    WRONG_USER_GUID,
    INVALID_GRANT_SETUP,
    UNKNOWN_ERROR,
};

