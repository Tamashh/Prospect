#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YRetentionProgress.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYRetentionProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 daysClaimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastClaimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool claimedAll;
    
    FYRetentionProgress();
};

