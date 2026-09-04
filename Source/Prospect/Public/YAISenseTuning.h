#pragma once
#include "CoreMinimal.h"
#include "EYAIBehaviorReaction.h"
#include "YAISenseTuning.generated.h"

USTRUCT(BlueprintType)
struct FYAISenseTuning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_decreasePerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_targetIsCrouchingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYAIBehaviorReaction, float> m_behaviorReactionThresholds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxIntensity;
    
    PROSPECT_API FYAISenseTuning();
};

