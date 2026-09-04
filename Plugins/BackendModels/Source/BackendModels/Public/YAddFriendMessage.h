#pragma once
#include "CoreMinimal.h"
#include "YPlayFabFriendWithPresence.h"
#include "YAddFriendMessage.generated.h"

USTRUCT(BlueprintType)
struct FYAddFriendMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool sendNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabFriendWithPresence PlayFabFriendWithState;
    
    BACKENDMODELS_API FYAddFriendMessage();
};

