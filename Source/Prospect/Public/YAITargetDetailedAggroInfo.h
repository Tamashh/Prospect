#pragma once
#include "CoreMinimal.h"
#include "EYAIDetailAggroType.h"
#include "YAITargetDetailedAggroInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAITargetDetailedAggroInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYAIDetailAggroType, float> m_detailedAggroValues;
    
    PROSPECT_API FYAITargetDetailedAggroInfo();
};

