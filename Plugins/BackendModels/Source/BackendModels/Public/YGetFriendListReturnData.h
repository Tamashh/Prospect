#pragma once
#include "CoreMinimal.h"
#include "YUserFriendList.h"
#include "YGetFriendListReturnData.generated.h"

USTRUCT(BlueprintType)
struct FYGetFriendListReturnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUserFriendList friendList;
    
    BACKENDMODELS_API FYGetFriendListReturnData();
};

