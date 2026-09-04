#pragma once
#include "CoreMinimal.h"
#include "EYContractDifficulty.h"
#include "YActionContractConditions.generated.h"

USTRUCT(BlueprintType)
struct FYActionContractConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_filterByContractDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYContractDifficulty m_contractDifficultyCondition;
    
    PROSPECT_API FYActionContractConditions();
};

