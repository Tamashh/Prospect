#pragma once
#include "CoreMinimal.h"
#include "YWeightedReward.h"
#include "YWeightedRewardAndAmount.generated.h"

USTRUCT(BlueprintType)
struct FYWeightedRewardAndAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWeightedReward m_weightedReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    PROSPECT_API FYWeightedRewardAndAmount();
};

