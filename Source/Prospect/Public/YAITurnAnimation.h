#pragma once
#include "CoreMinimal.h"
#include "YAITurnAnimation.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAITurnAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle;
    
    PROSPECT_API FYAITurnAnimation();
};

