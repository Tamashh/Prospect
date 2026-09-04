#pragma once
#include "CoreMinimal.h"
#include "EYSignlarState.generated.h"

UENUM(BlueprintType)
enum class EYSignlarState : uint8 {
    None,
    GettingConnection,
    Initializing,
    Connected,
    NotConnected,
    Reconnecting,
    ShuttingDown,
};

