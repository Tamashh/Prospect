#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsType.h"
#include "YItemStatsAssociationEntry.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FYItemStatsAssociationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_inversePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_curveTranspose;
    
    PROSPECT_API FYItemStatsAssociationEntry();
};

