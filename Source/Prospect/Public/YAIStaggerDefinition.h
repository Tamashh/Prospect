#pragma once
#include "CoreMinimal.h"
#include "YAIStaggerAnimations.h"
#include "YAIStaggerDefinition.generated.h"

USTRUCT(BlueprintType)
struct FYAIStaggerDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_additionalStaggersToCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFlinch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAIStaggerAnimations> m_animationOptions;
    
    PROSPECT_API FYAIStaggerDefinition();
};

