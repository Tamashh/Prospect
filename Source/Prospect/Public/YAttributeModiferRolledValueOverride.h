#pragma once
#include "CoreMinimal.h"
#include "YAttributeModiferRolledValueOverride.generated.h"

USTRUCT(BlueprintType)
struct FYAttributeModiferRolledValueOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stepGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_calculatedMaxValue;
    
    PROSPECT_API FYAttributeModiferRolledValueOverride();
};

