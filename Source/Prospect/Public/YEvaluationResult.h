#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "YEvaluationResult.generated.h"

USTRUCT(BlueprintType)
struct FYEvaluationResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeEvaluated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_overAllScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, int32> m_occupiedLocationsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYActivityType, int32> m_scorePerType;
    
    PROSPECT_API FYEvaluationResult();
};

