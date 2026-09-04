#pragma once
#include "CoreMinimal.h"
#include "YOcclusionPhysMatAbsorptionData.generated.h"

USTRUCT(BlueprintType)
struct FYOcclusionPhysMatAbsorptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_absorptionAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useLowPassCutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_occlusionLowPassCutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useHighPassCutoffFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_occlusionHighPassCutoffFrequency;
    
    PROSPECT_API FYOcclusionPhysMatAbsorptionData();
};

