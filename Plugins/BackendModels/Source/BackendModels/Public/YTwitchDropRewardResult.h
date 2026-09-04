#pragma once
#include "CoreMinimal.h"
#include "YTwitchDropRewardResult.generated.h"

USTRUCT(BlueprintType)
struct FYTwitchDropRewardResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemPlayfabId;
    
    BACKENDMODELS_API FYTwitchDropRewardResult();
};

