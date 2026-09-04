#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsType.h"
#include "YStatsTypeDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FYStatsTypeDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_baseValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_modifiedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_difference;
    
    PROSPECT_API FYStatsTypeDataEntry();
};

