#pragma once
#include "CoreMinimal.h"
#include "YDebugGivePlayerContractRewardsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGivePlayerContractRewardsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYDebugGivePlayerContractRewardsRequest();
};

