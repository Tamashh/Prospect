#pragma once
#include "CoreMinimal.h"
#include "YDamagePlayerTrackingData.generated.h"

USTRUCT(BlueprintType)
struct FYDamagePlayerTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeTakeDamageFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeStartedGettingKilledByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthStartedKilledByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_staminaStartedKilledByPlayer;
    
    PROSPECT_API FYDamagePlayerTrackingData();
};

