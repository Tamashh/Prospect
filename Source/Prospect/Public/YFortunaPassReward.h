#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YUIFortunaPassRewardData.h"
#include "YFortunaPassReward.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPremium;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUIFortunaPassRewardData m_uiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_itemToReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_itemToRewardAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_xpBonusPercentIncrease;
    
    PROSPECT_API FYFortunaPassReward();
};

