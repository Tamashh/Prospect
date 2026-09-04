#pragma once
#include "CoreMinimal.h"
#include "YContractReward.h"
#include "YContractRewardUIData.generated.h"

USTRUCT(BlueprintType)
struct FYContractRewardUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool showDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYContractReward contractReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    PROSPECT_API FYContractRewardUIData();
};

