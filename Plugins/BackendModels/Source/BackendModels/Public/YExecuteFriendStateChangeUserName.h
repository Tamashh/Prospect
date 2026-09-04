#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "YExecuteFriendStateChangeUserName.generated.h"

USTRUCT(BlueprintType)
struct FYExecuteFriendStateChangeUserName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendState stateToChangeTo;
    
    BACKENDMODELS_API FYExecuteFriendStateChangeUserName();
};

