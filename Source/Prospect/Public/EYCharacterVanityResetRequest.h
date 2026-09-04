#pragma once
#include "CoreMinimal.h"
#include "EYCharacterVanityResetRequest.generated.h"

UENUM(BlueprintType)
enum class EYCharacterVanityResetRequest : uint8 {
    Invalid,
    Category,
    Customization,
};

