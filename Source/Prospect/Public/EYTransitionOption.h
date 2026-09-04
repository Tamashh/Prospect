#pragma once
#include "CoreMinimal.h"
#include "EYTransitionOption.generated.h"

UENUM(BlueprintType)
enum class EYTransitionOption : uint8 {
    None,
    ScreenChange,
    MapTravel,
};

