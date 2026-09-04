#pragma once
#include "CoreMinimal.h"
#include "YClaimCompletedActiveContractRewardsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYClaimCompletedActiveContractRewardsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> contractsToUnlock;
    
    BACKENDMODELS_API FYClaimCompletedActiveContractRewardsRequest();
};

