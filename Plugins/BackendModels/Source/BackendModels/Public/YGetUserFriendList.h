#pragma once
#include "CoreMinimal.h"
#include "YGetUserFriendList.generated.h"

USTRUCT(BlueprintType)
struct FYGetUserFriendList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    BACKENDMODELS_API FYGetUserFriendList();
};

