#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.generated.h"

UENUM(BlueprintType)
enum class EYFriendState : uint8 {
    NONE,
    PENDINGINBOUND,
    PENDINGOUTBOUND,
    ACCEPTED,
    BLOCKED,
    SUGGESTED,
};

