#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "YStaminaStateOverrides.generated.h"

USTRUCT(BlueprintType)
struct FYStaminaStateOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYPlayerStateBlueprint> m_states;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_regenerationRateScalar;
    
    PROSPECT_API FYStaminaStateOverrides();
};

