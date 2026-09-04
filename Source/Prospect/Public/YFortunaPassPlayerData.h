#pragma once
#include "CoreMinimal.h"
#include "YCompletedActions.h"
#include "YFortunaPassClaimedRewards.h"
#include "YFortunaPassPlayerData.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYFortunaPassPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCompletedActions completedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFortunaPassClaimedRewards claimedRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPremiumUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seasonXp;
    
    FYFortunaPassPlayerData();
};

