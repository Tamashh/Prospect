#pragma once
#include "CoreMinimal.h"
#include "YFriendAction.h"
#include "YExecuteFriendStateChange.generated.h"

USTRUCT(BlueprintType)
struct FYExecuteFriendStateChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFriendAction> friendExecutionStates;
    
    BACKENDMODELS_API FYExecuteFriendStateChange();
};

