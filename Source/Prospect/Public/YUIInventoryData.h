#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YPlayerInventory.h"
#include "YUIInventoryData.generated.h"

USTRUCT(BlueprintType)
struct FYUIInventoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_componentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_bagInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_safeContainerInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_stashInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_bagItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPlayerSetType, FYInventoryItem> m_individualInventoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_removedItemIds;
    
    PROSPECT_API FYUIInventoryData();
};

