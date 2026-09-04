#pragma once
#include "CoreMinimal.h"
#include "EYFriendActionResult.generated.h"

UENUM(BlueprintType)
enum class EYFriendActionResult : uint8 {
    OK,
    INVALID_TARGET,
    ALREADY_FRIEND,
    NOT_IN_STATION,
    EMPTY_PENDING_INVITES,
    NONEXISTENT_FRIEND_REQUEST,
    FRIENDS_LIMIT_REACHED,
    INTERNAL_ERROR,
};

