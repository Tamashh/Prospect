#pragma once
#include "CoreMinimal.h"
#include "EYFriendActionResult.h"
#include "YPlayFabFriendWithPresence.h"
#include "YAcceptFriendRequestResult.generated.h"

USTRUCT(BlueprintType)
struct FYAcceptFriendRequestResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabFriendWithPresence friendInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendActionResult Result;
    
    BACKENDMODELS_API FYAcceptFriendRequestResult();
};

