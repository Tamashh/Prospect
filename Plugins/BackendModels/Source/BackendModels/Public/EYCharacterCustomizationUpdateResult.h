#pragma once
#include "CoreMinimal.h"
#include "EYCharacterCustomizationUpdateResult.generated.h"

UENUM(BlueprintType)
enum class EYCharacterCustomizationUpdateResult : uint8 {
    OK,
    INVALID_ID,
    UNKNOWN_ERROR,
};

