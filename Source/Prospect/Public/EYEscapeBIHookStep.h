#pragma once
#include "CoreMinimal.h"
#include "EYEscapeBIHookStep.generated.h"

UENUM(BlueprintType)
enum class EYEscapeBIHookStep : uint8 {
    Undefined,
    Created,
    Triggered,
    ShipLanded,
    Escaped,
    CooldownBegin,
    CooldownEnded,
};

