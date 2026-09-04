#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YWeightedRowHandle.h"
#include "YLootRollRow.generated.h"

USTRUCT(BlueprintType)
struct FYLootRollRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeightedRowHandle> m_rowHandles;
    
    PROSPECT_API FYLootRollRow();
};

