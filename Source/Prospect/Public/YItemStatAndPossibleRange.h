#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsType.h"
#include "YItemStatAndPossibleRange.generated.h"

USTRUCT(BlueprintType)
struct FYItemStatAndPossibleRange {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsType m_itemStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_worstVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_bestVal;
    
public:
    PROSPECT_API FYItemStatAndPossibleRange();
};

