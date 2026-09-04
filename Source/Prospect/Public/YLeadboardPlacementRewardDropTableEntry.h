#pragma once
#include "CoreMinimal.h"
#include "YLeadboardPlacementRewardDropTableEntry.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYLeadboardPlacementRewardDropTableEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardsPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_leaderboardRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_rewardsDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_prospectorLevelVPRewardsDT;
    
    PROSPECT_API FYLeadboardPlacementRewardDropTableEntry();
};

