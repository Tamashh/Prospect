#pragma once
#include "CoreMinimal.h"
#include "YClaimVictimCompensationRequest.generated.h"

USTRUCT(BlueprintType)
struct FYClaimVictimCompensationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Guid;
    
    BACKENDMODELS_API FYClaimVictimCompensationRequest();
};

