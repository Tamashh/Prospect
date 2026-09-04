#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeState.h"
#include "YAlienForgeFXCompleteState.generated.h"

USTRUCT(BlueprintType)
struct FYAlienForgeFXCompleteState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAlienForgeState m_alienForgeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_forgeProcessDuration;
    
    PROSPECT_API FYAlienForgeFXCompleteState();
};

