#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YContractReward.generated.h"

USTRUCT(BlueprintType)
struct FYContractReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rewardRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEndOfMissionChainReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isShopOrCraftingUnlock;
    
    PROSPECT_API FYContractReward();
};

