#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YNetPlayerInventoryUpdate.generated.h"

USTRUCT(BlueprintType)
struct FYNetPlayerInventoryUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_itemsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_itemsToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_itemsToRemove;
    
    PROSPECT_API FYNetPlayerInventoryUpdate();
};

