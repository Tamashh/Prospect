#pragma once
#include "CoreMinimal.h"
#include "YContractUnlockReward.h"
#include "YContractItemUnlocks.generated.h"

USTRUCT(BlueprintType)
struct FYContractItemUnlocks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYContractUnlockReward> m_itemUnlocks;
    
    PROSPECT_API FYContractItemUnlocks();
};

