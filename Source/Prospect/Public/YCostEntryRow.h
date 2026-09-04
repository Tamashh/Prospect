#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCostEntryRow.generated.h"

USTRUCT(BlueprintType)
struct FYCostEntryRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_costType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_costAmount;
    
    PROSPECT_API FYCostEntryRow();
};

