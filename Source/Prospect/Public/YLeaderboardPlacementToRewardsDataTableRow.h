#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YLeaderboardPlacementToRewardsDataTableRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYLeaderboardPlacementToRewardsDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rewardsPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_leaderboardRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_rewardsDropTablePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> m_prospectorLevelVprewardsTablePath;
    
    PROSPECT_API FYLeaderboardPlacementToRewardsDataTableRow();
};

