#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YLootCountData.generated.h"

USTRUCT(BlueprintType)
struct FYLootCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_rollCount;
    
    PROSPECT_API FYLootCountData();
};

