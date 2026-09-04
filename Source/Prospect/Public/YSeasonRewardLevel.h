#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YSeasonRewardLevel.generated.h"

USTRUCT(BlueprintType)
struct FYSeasonRewardLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_unlockXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_basicRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_paidRewards;
    
    PROSPECT_API FYSeasonRewardLevel();
};

