#pragma once
#include "CoreMinimal.h"
#include "YActivateContractRequest.generated.h"

USTRUCT(BlueprintType)
struct FYActivateContractRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYActivateContractRequest();
};

