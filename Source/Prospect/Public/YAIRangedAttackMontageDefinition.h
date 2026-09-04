#pragma once
#include "CoreMinimal.h"
#include "YAIRangedAttackMontageDefinition.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FYAIRangedAttackMontageDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_attackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> m_animMontageToPlay;
    
    PROSPECT_API FYAIRangedAttackMontageDefinition();
};

