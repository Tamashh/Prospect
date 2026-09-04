#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.generated.h"

UENUM(BlueprintType)
enum class EYWheelType : uint8 {
    None,
    Comm,
    Vanity,
    Social,
    Tool,
    Consumable,
    VanitySelection,
};

