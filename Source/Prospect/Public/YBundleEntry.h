#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YBundleEntry.generated.h"

USTRUCT(BlueprintType)
struct FYBundleEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_quantity;
    
    PROSPECT_API FYBundleEntry();
};

