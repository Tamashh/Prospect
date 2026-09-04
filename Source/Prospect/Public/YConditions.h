#pragma once
#include "CoreMinimal.h"
#include "EYLogicOperator.h"
#include "YConditions.generated.h"

class UYCondition;

USTRUCT(BlueprintType)
struct PROSPECT_API FYConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYCondition*> m_conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYLogicOperator m_operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_invert;
    
    FYConditions();
};

