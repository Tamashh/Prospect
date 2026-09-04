#pragma once
#include "CoreMinimal.h"
#include "YWeaponTransportCapsuleData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponTransportCapsuleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_halfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_skipTraceToVerifyHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minDot2DThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_verifyLineOfSight;
    
    PROSPECT_API FYWeaponTransportCapsuleData();
};

