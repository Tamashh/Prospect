#pragma once
#include "CoreMinimal.h"
#include "YPlayerUIHealthBarDeltaSettingsDetails.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerUIHealthBarDeltaSettingsDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deltaAdjustmentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_deltaAdjustmentInitialDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_segmentSize;
    
    PROSPECT_API FYPlayerUIHealthBarDeltaSettingsDetails();
};

