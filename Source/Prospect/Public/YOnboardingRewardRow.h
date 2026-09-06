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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearAllOnboardingRewardsBeforeRegranting;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isWelcomePackageVariant;

    PROSPECT_API FYOnboardingRewardRow();
};

