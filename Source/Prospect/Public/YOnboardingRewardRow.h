#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YOnboardingRewardEntry.h"
#include "YOnboardingRewardRow.generated.h"

USTRUCT(BlueprintType)
struct FYOnboardingRewardRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYOnboardingRewardEntry> m_rewards;
    
    PROSPECT_API FYOnboardingRewardRow();
};

