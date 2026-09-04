#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YGenericIDDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYGenericIDDataTableRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
    PROSPECT_API FYGenericIDDataTableRow();
};

