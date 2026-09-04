#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.h"
#include "YRewardEntry.h"
#include "YTotalGainedCurrencyData.generated.h"

USTRUCT(BlueprintType)
struct FYTotalGainedCurrencyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_startAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCurrencyType m_currencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_endAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRewardEntry> m_perEntryReward;
    
    PROSPECT_API FYTotalGainedCurrencyData();
};

