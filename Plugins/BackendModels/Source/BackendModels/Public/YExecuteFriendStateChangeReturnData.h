#pragma once
#include "CoreMinimal.h"
#include "EYGetFriendListResult.h"
#include "YFriendEntry.h"
#include "YExecuteFriendStateChangeReturnData.generated.h"

USTRUCT(BlueprintType)
struct FYExecuteFriendStateChangeReturnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGetFriendListResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFriendEntry> updatedFriends;
    
    BACKENDMODELS_API FYExecuteFriendStateChangeReturnData();
};

