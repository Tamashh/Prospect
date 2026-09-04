#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.h"
#include "YImpactDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYImpactDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_fxDefaultDataTableRow;
    
    PROSPECT_API FYImpactDataTableRow();
};

