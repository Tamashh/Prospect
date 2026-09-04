#pragma once
#include "CoreMinimal.h"
#include "EYFriendState.h"
#include "YFriendAction.generated.h"

USTRUCT(BlueprintType)
struct FYFriendAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendState stateToChangeTo;
    
    BACKENDMODELS_API FYFriendAction();
};

