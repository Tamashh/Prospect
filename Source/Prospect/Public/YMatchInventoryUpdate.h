#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YMatchInventoryUpdate.generated.h"

USTRUCT(BlueprintType)
struct FYMatchInventoryUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_idsToRemove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_itemsToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_itemsToAdd;
    
    PROSPECT_API FYMatchInventoryUpdate();
};

