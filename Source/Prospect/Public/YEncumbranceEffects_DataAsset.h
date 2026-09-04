#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "YEncumbranceEffects_DataAsset.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class PROSPECT_API UYEncumbranceEffects_DataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_walkSpeedEffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_maxStaminaEffectCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maximumEncumbranceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_disableSprintThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_disableSprintLedgeGrabThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_disableSprintWallRunThreshold;
    
    UYEncumbranceEffects_DataAsset();

};

