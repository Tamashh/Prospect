#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YMatchFlowRow.generated.h"

USTRUCT(BlueprintType)
struct FYMatchFlowRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_matchFlow;
    
    PROSPECT_API FYMatchFlowRow();
};

