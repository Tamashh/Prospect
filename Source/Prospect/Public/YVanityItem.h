#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YVanityItem.generated.h"

USTRUCT(BlueprintType)
struct FYVanityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_vanityHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    PROSPECT_API FYVanityItem();
};

