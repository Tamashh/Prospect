#pragma once
#include "CoreMinimal.h"
#include "EYUpdateGlobalVanityResult.generated.h"

UENUM(BlueprintType)
enum class EYUpdateGlobalVanityResult : uint8 {
    OK,
    INVALID_ID,
    NOT_OWNED_ITEM,
    UNKNOWN_ERROR,
};

