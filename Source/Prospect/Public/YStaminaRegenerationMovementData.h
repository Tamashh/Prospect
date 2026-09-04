#pragma once
#include "CoreMinimal.h"
#include "YStaminaRegenerationMovementData.generated.h"

USTRUCT(BlueprintType)
struct FYStaminaRegenerationMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_walkingRegenerationRateScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stationaryRegenerationRateScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_jumpingRegenerationRateScalar;
    
    PROSPECT_API FYStaminaRegenerationMovementData();
};

