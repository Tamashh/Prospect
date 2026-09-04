#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YInventoryItem.h"
#include "YSecondEntry.generated.h"

USTRUCT(BlueprintType)
struct FYSecondEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_inventoryItemsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> m_highlightGuids;
    
    PROSPECT_API FYSecondEntry();
};

