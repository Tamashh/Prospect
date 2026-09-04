#pragma once
#include "CoreMinimal.h"
#include "EYAIState.h"
#include "YAITurnAnimationsData.h"
#include "YDataTableRowBase.h"
#include "YAITurnAnimationRow.generated.h"

USTRUCT(BlueprintType)
struct FYAITurnAnimationRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYAIState, FYAITurnAnimationsData> m_turnsAnimationPerState;
    
    PROSPECT_API FYAITurnAnimationRow();
};

