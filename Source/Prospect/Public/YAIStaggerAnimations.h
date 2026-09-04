#pragma once
#include "CoreMinimal.h"
#include "YAIStaggerAnimations.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAIStaggerAnimations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> m_animMontages;
    
    PROSPECT_API FYAIStaggerAnimations();
};

