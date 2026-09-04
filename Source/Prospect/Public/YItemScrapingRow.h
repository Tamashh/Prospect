#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YScrapingResultRow.h"
#include "YItemScrapingRow.generated.h"

USTRUCT(BlueprintType)
struct FYItemScrapingRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYScrapingResultRow> m_scrapingResults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYScrapingResultRow> m_currencyRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_factionReward;
    
    PROSPECT_API FYItemScrapingRow();
};

