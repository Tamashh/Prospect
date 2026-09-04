#pragma once
#include "CoreMinimal.h"
#include "YCancelActiveContractResult.generated.h"

USTRUCT(BlueprintType)
struct FYCancelActiveContractResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYCancelActiveContractResult();
};

