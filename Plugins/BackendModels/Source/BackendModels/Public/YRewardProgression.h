#pragma once
#include "CoreMinimal.h"
#include "YPlayerReward.h"
#include "YRewardProgression.generated.h"

USTRUCT(BlueprintType)
struct FYRewardProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerReward> factionProgressionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seasonXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prospectorLevelXP;
    
    BACKENDMODELS_API FYRewardProgression();
};

