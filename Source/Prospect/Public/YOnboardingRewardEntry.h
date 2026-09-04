#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYRewardType.h"
#include "YOnboardingRewardEntry.generated.h"

USTRUCT(BlueprintType)
struct FYOnboardingRewardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRewardType m_rewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rewardRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    PROSPECT_API FYOnboardingRewardEntry();
};

