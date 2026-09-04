#pragma once
#include "CoreMinimal.h"
#include "EYInterruptionCause.generated.h"

UENUM(BlueprintType)
enum class EYInterruptionCause : uint8 {
    Undefined,
    ServerCrash,
    BackendDown,
    SignalRDown = 4,
    NoInternet = 8,
    MAX = 16,
};

