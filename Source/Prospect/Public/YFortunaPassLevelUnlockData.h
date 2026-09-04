#pragma once
#include "CoreMinimal.h"
#include "YCostEntryRow.h"
#include "YFortunaPassLevelUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassLevelUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_unlockXPRelPreviousLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCostEntryRow m_skipLevelCost;
    
    PROSPECT_API FYFortunaPassLevelUnlockData();
};

