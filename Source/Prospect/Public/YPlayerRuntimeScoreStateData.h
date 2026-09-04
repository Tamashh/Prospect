#pragma once
#include "CoreMinimal.h"
#include "EYPlayerGameDataStateType.h"
#include "YPlayerRuntimeScoreStateData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerRuntimeScoreStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerGameDataStateType m_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    PROSPECT_API FYPlayerRuntimeScoreStateData();
};

