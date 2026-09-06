#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YRemoveClaimedOnboardingRewardsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRemoveClaimedOnboardingRewardsRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> rewardIds;

    BACKENDMODELS_API FYRemoveClaimedOnboardingRewardsRequest();
};
