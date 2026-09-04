#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YOcclusionPhysMatAbsorptionData.h"
#include "YOcclusionSystemSettings.generated.h"

class UPhysicalMaterial;

USTRUCT(BlueprintType)
struct FYOcclusionSystemSettings : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maximumFrameMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_soundMaxDistanceThresholdMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAsyncTraceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxSyncTraceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_considerSyncTracesForMaxAsyncCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_listenerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicalMaterial*, FYOcclusionPhysMatAbsorptionData> m_physmatAbsorptionMap;
    
    PROSPECT_API FYOcclusionSystemSettings();
};

