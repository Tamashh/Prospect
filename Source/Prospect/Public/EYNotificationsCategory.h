#pragma once
#include "CoreMinimal.h"
#include "EYNotificationsCategory.generated.h"

UENUM(BlueprintType)
enum class EYNotificationsCategory : uint8 {
    None,
    Workbench,
    PlayerQuarters,
    FriendsStatus,
    FriendInvites,
    SquadUpdates,
    SquadInvites,
    FortunaPass,
    Service,
    Account,
    MAX,
};

