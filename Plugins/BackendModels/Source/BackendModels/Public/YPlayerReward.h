#pragma once
#include "CoreMinimal.h"
#include "EYPlayerRewardSource.h"
#include "YPlayerReward.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RewardId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerRewardSource Source;
    
    BACKENDMODELS_API FYPlayerReward();
};

