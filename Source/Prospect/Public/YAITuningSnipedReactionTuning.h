#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "YAITuningSnipedReactionTuning.generated.h"

USTRUCT(BlueprintType)
struct FYAITuningSnipedReactionTuning : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_snipedMinimunDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_snipedDamagedRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_snipedPlayerRadius;
    
    PROSPECT_API FYAITuningSnipedReactionTuning();
};

