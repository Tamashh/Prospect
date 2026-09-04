#pragma once
#include "CoreMinimal.h"
#include "YStabilityData.generated.h"

USTRUCT(BlueprintType)
struct FYStabilityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentStabilityValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeValueIncreased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeValueDecreased;
    
    PROSPECT_API FYStabilityData();
};

