#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YPlayerAwarenessTuningDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerAwarenessTuningDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxNotificationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_targetingMaxNotificationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dotProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dotScalingDistancePerMeterMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dotMaxmimumThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_requiredAimAtDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_requiredAimAtDurationTargeting;
    
    PROSPECT_API FYPlayerAwarenessTuningDataTableRow();
};

