#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YFortunaPassLevelUnlockData.h"
#include "YFortunaPassReward.h"
#include "YFortunaPassLevel.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassLevel : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFortunaPassLevelUnlockData m_fortunaPassLevelUnlockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFortunaPassReward m_fortunaPassReward;
    
    PROSPECT_API FYFortunaPassLevel();
};

