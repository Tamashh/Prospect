#pragma once
#include "CoreMinimal.h"
#include "YContractFailCondition.generated.h"

USTRUCT(BlueprintType)
struct FYContractFailCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_failConditionName;
    
    PROSPECT_API FYContractFailCondition();
};

