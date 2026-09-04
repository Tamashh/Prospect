#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYRewardType.h"
#include "YDataTableRowBase.h"
#include "YRewardDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYRewardDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRewardType m_rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rewardDataTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weight;
    
    PROSPECT_API FYRewardDataTableRow();
};

