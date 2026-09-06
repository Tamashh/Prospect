#pragma once
#include "CoreMinimal.h"
#include "EYLoadoutPresetItemStatus.generated.h"

UENUM(BlueprintType)
enum class EYLoadoutPresetItemStatus : uint8 {
    Available,
    Unavailable,
    Purchasable,
    Partial,
    MAX,
};
