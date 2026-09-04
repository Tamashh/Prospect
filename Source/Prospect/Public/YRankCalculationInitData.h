#pragma once
#include "CoreMinimal.h"
#include "YRankCalculationInitData.generated.h"

class AYPlayerState;

USTRUCT(BlueprintType)
struct FYRankCalculationInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerState*> m_playerStates;
    
    PROSPECT_API FYRankCalculationInitData();
};

