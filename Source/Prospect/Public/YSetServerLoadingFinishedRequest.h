#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YSetServerLoadingFinishedRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetServerLoadingFinishedRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool finishedLoading;
    
    PROSPECT_API FYSetServerLoadingFinishedRequest();
};

