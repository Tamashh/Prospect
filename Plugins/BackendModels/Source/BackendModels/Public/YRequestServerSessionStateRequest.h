#pragma once
#include "CoreMinimal.h"
#include "YRequestServerSessionStateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestServerSessionStateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 amountRequests;
    
    BACKENDMODELS_API FYRequestServerSessionStateRequest();
};

