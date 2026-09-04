#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YUIDailyCrateTimerInfo.generated.h"

USTRUCT(BlueprintType)
struct FYUIDailyCrateTimerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_generatorRewardCanBeCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimespan m_timeUntilNextReward;
    
    PROSPECT_API FYUIDailyCrateTimerInfo();
};

