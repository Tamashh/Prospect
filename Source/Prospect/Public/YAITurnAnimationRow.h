#pragma once
#include "CoreMinimal.h"
#include "YAITurnAnimation.h"
#include "YDataTableRowBase.h"
#include "YAITurnAnimationRow.generated.h"

USTRUCT(BlueprintType)
struct FYAITurnAnimationRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAITurnAnimation> m_animations;
    
    PROSPECT_API FYAITurnAnimationRow();
};

