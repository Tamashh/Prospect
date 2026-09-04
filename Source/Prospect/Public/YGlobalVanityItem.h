#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YGlobalVanityItem.generated.h"

USTRUCT(BlueprintType)
struct FYGlobalVanityItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_variation;
    
    PROSPECT_API FYGlobalVanityItem();
};

