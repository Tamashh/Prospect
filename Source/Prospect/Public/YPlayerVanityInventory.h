#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YPlayerVanityInventory.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerVanityInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_ownedVanityItems;
    
    PROSPECT_API FYPlayerVanityInventory();
};

