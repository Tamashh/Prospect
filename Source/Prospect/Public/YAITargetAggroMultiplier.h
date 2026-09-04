#pragma once
#include "CoreMinimal.h"
#include "YAITargetAggroMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FYAITargetAggroMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_aggroMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_multiplierTimeLeft;
    
    PROSPECT_API FYAITargetAggroMultiplier();
};

