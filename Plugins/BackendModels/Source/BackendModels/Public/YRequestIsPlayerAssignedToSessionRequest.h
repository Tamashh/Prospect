#pragma once
#include "CoreMinimal.h"
#include "YRequestIsPlayerAssignedToSessionRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestIsPlayerAssignedToSessionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRequestIsPlayerAssignedToSessionRequest();
};

