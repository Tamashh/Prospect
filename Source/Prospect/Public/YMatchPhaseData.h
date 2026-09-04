#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YMatchPhaseData.generated.h"

USTRUCT(BlueprintType)
struct FYMatchPhaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_matchFlowRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_matchPhaseDefinitionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_visualVariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldForcePhaseTransition;
    
    PROSPECT_API FYMatchPhaseData();
};

