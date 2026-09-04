#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYRewardType.h"
#include "YRewardsPoolGrantTupleRow.generated.h"

USTRUCT(BlueprintType)
struct FYRewardsPoolGrantTupleRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRewardType m_rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_grantAmount;
    
    PROSPECT_API FYRewardsPoolGrantTupleRow();
};

