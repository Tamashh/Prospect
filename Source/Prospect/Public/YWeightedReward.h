#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWeightedReward.generated.h"

USTRUCT(BlueprintType)
struct FYWeightedReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weight;
    
    PROSPECT_API FYWeightedReward();
};

