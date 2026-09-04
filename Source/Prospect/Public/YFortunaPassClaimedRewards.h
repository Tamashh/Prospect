#pragma once
#include "CoreMinimal.h"
#include "YFortunaPassClaimedRewards.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYFortunaPassClaimedRewards {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> rewardsIds;
    
    FYFortunaPassClaimedRewards();
};

