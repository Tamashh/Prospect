#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YUIInventoryData.h"
#include "YWidget_Inventory_Base.h"
#include "YWidget_Inventory_Attachments.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_Attachments : public UYWidget_Inventory_Base {
    GENERATED_BODY()
public:
    UYWidget_Inventory_Attachments();

private:
    UFUNCTION(BlueprintCallable)
    void OnInspectedInventoryItemUpdatedCallback(FYInventoryItem newInventoryItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerInventoryDataUpdated(const FYUIInventoryData& inPlayerInventory);
    
};

