#pragma once
#include "CoreMinimal.h"
#include "EYPlayerRewardSource.h"
#include "YPlayerReward.h"
#include "YRewardInventory.generated.h"

USTRUCT(BlueprintType)
struct FYRewardInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerReward> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerReward> currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerRewardSource Source;
    
    BACKENDMODELS_API FYRewardInventory();
};

