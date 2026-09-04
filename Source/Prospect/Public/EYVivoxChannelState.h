#pragma once
#include "CoreMinimal.h"
#include "EYVivoxChannelState.generated.h"

UENUM(BlueprintType)
enum class EYVivoxChannelState : uint8 {
    None,
    Disconnected,
    PendingVivoxDisconnection,
    Logout,
    PendingBackendTokenJoin,
    PendingVivoxExecutionState,
    PendingVivoxChannelJoin,
    Connected,
};

