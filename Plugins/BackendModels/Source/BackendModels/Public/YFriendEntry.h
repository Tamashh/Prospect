#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "YSocialPresenceEntry.h"
#include "YFriendEntry.generated.h"

USTRUCT(BlueprintType)
struct FYFriendEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSocialPresenceEntry presence;
    
    BACKENDMODELS_API FYFriendEntry();
};

