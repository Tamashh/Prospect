#pragma once
#include "CoreMinimal.h"
#include "YRewardDropTableEntry.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYRewardDropTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardsPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_vpThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_rewardsDT;
    
    PROSPECT_API FYRewardDropTableEntry();
};

