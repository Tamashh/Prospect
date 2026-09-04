#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YContractUnlockReward.generated.h"

USTRUCT(BlueprintType)
struct FYContractUnlockReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_itemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldBeDisplayedAsEndOfChainReward;
    
    PROSPECT_API FYContractUnlockReward();
};

