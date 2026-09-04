#pragma once
#include "CoreMinimal.h"
#include "EYNotificationMessageType.generated.h"

UENUM(BlueprintType)
enum class EYNotificationMessageType : uint8 {
    None,
    SquadLeft,
    SquadJoined,
    SquadDisbanded,
    SquadFailed,
    SquadInvite,
    FriendAdded,
    FriendOnline,
    FriendOffline,
    FriendInviteSent,
    FriendInvite,
    GenericSquad,
    GenericFriend,
    GenericNotificationMessage,
};

