#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YMatchPhaseVisualVariation.h"
#include "YMatchPhaseDefinitionRow.generated.h"

USTRUCT(BlueprintType)
struct FYMatchPhaseDefinitionRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_phaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMatchPhaseVisualVariation> m_visualVariations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_gameplayRowHandle;
    
    PROSPECT_API FYMatchPhaseDefinitionRow();
};

