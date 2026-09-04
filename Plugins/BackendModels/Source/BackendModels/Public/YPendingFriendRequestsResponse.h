#pragma once
#include "CoreMinimal.h"
#include "YSimplePlayerProfile.h"
#include "YPendingFriendRequestsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYPendingFriendRequestsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSimplePlayerProfile> invites;
    
    BACKENDMODELS_API FYPendingFriendRequestsResponse();
};

