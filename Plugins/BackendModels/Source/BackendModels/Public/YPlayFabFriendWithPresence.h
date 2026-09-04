#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "YPlayFabFriend.h"
#include "YPlayFabFriendWithPresence.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabFriendWithPresence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabFriend PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPresencePlayerState PlayerOnlineState;
    
    BACKENDMODELS_API FYPlayFabFriendWithPresence();
};

