#pragma once
#include "CoreMinimal.h"
#include "YAIStaggerTriggerWeakspotHealth.generated.h"

USTRUCT(BlueprintType)
struct FYAIStaggerTriggerWeakspotHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_hitspotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_damageValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_staggerName;
    
    PROSPECT_API FYAIStaggerTriggerWeakspotHealth();
};

