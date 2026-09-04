#pragma once
#include "CoreMinimal.h"
#include "YPlayerStartScoreRule.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerStartScoreRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_scorePerPlayerInRadius;
    
    PROSPECT_API FYPlayerStartScoreRule();
};

