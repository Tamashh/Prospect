#pragma once
#include "CoreMinimal.h"
#include "EYUserInviteStatus.generated.h"

UENUM(BlueprintType)
enum class EYUserInviteStatus : uint8 {
    Unknown,
    Friends,
    PendingInbound,
    PendingOutbound,
    Blocked,
};

