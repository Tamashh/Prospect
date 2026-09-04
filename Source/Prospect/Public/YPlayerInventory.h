#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YPlayerInventory.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_permutationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_inventoryComponentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_replicatedItems;
    
    PROSPECT_API FYPlayerInventory();
};

