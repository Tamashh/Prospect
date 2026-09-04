#pragma once
#include "CoreMinimal.h"
#include "EYLandingType.h"
#include "YLandingEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FYLandingEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYLandingType m_landingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fallingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_unmodifiedDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damage;
    
    PROSPECT_API FYLandingEventInfo();
};

