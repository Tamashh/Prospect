#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YEndOfSeasonReward.h"
#include "YRankedSeasonRow.generated.h"

USTRUCT(BlueprintType)
struct FYRankedSeasonRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_rankedSeasonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_startDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_endDateTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_utcStartDateTimeTicks;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 m_utcEndDateTimeTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYEndOfSeasonReward> m_endSeasonRewards;
    
    PROSPECT_API FYRankedSeasonRow();
};

