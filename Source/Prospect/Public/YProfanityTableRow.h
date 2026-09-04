#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YProfanityTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYProfanityTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    PROSPECT_API FYProfanityTableRow();
};

