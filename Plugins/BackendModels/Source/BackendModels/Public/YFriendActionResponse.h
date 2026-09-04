#pragma once
#include "CoreMinimal.h"
#include "EYFriendActionResult.h"
#include "YFriendActionResponse.generated.h"

USTRUCT(BlueprintType)
struct FYFriendActionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString errorMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OperationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendActionResult Result;
    
    BACKENDMODELS_API FYFriendActionResponse();
};

