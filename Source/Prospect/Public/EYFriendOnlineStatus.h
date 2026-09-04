#pragma once
#include "CoreMinimal.h"
#include "EYFriendOnlineStatus.generated.h"

UENUM(BlueprintType)
enum class EYFriendOnlineStatus : uint8 {
    None,
    PlayingThisGame,
    Online,
    PlayingOtherGame,
};

