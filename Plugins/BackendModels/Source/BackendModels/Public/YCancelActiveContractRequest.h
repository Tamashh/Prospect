#pragma once
#include "CoreMinimal.h"
#include "YCancelActiveContractRequest.generated.h"

USTRUCT(BlueprintType)
struct FYCancelActiveContractRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYCancelActiveContractRequest();
};

