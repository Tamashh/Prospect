#pragma once
#include "CoreMinimal.h"
#include "YFortunaPassClaimRewardsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassClaimRewardsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> rewardsIds;
    
    BACKENDMODELS_API FYFortunaPassClaimRewardsRequest();
};

