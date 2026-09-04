#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YRequestServerMapRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRequestServerMapRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    BACKENDMODELS_API FYRequestServerMapRequest();
};

