#pragma once
#include "CoreMinimal.h"
#include "YAITurnAnimation.h"
#include "YAITurnAnimationsData.generated.h"

USTRUCT(BlueprintType)
struct FYAITurnAnimationsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAITurnAnimation> m_animations;
    
    PROSPECT_API FYAITurnAnimationsData();
};

