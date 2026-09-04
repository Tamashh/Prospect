#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YRequestShowNewCustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FYRequestShowNewCustomizationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_requestedRowHandle;
    
    PROSPECT_API FYRequestShowNewCustomizationData();
};

