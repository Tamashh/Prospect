#pragma once
#include "CoreMinimal.h"
#include "EYPlayerGameDataStateType.h"
#include "YPlayerRuntimeScoreStateData.h"
#include "YPlayerStateChangeData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYPlayerStateChangeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerRuntimeScoreStateData m_newData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerRuntimeScoreStateData m_oldData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerGameDataStateType m_relevantState;
    
    PROSPECT_API FYPlayerStateChangeData();
};

