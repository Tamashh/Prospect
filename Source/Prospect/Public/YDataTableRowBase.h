#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YDataTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYDataTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_rowName;
    
    FYDataTableRowBase();
};

