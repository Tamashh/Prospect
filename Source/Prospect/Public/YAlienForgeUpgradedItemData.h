#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAlienForgeUpgradedItemData.generated.h"

USTRUCT(BlueprintType)
struct FYAlienForgeUpgradedItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_catalystRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_nextItemRowHandle;
    
    PROSPECT_API FYAlienForgeUpgradedItemData();
};

