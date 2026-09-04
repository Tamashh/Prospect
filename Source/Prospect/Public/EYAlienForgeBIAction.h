#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeBIAction.generated.h"

UENUM(BlueprintType)
enum class EYAlienForgeBIAction : uint8 {
    none,
    opened,
    closed,
    forging_started,
    forging_ended,
};

