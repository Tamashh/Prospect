#pragma once
#include "CoreMinimal.h"
#include "EYSocialUICategory.generated.h"

UENUM(BlueprintType)
enum class EYSocialUICategory : uint8 {
    FriendInvites,
    SquadInvites,
    Online,
    Offline,
    Blocked,
    SearchResults,
};

