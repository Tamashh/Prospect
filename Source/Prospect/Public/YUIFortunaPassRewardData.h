#pragma once
#include "CoreMinimal.h"
#include "YUIFortunaPassRewardData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYUIFortunaPassRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_bigImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardDescription;
    
    PROSPECT_API FYUIFortunaPassRewardData();
};

