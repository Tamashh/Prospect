#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAIRangedAttackDefinition.generated.h"

USTRUCT(BlueprintType)
struct FYAIRangedAttackDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rangedAttackHandle;
    
    PROSPECT_API FYAIRangedAttackDefinition();
};

