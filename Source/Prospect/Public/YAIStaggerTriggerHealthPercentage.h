#pragma once
#include "CoreMinimal.h"
#include "YAIStaggerTriggerHealthPercentage.generated.h"

USTRUCT(BlueprintType)
struct FYAIStaggerTriggerHealthPercentage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_healthPercentages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_staggerName;
    
    PROSPECT_API FYAIStaggerTriggerHealthPercentage();
};

