#pragma once
#include "CoreMinimal.h"
#include "YUIInventoryData.h"
#include "YWidget_Inventory_Base.h"
#include "YWidget_Inventory_LootContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_LootContainer : public UYWidget_Inventory_Base {
    GENERATED_BODY()
public:
    UYWidget_Inventory_LootContainer();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerInventoryDataUpdated(const FYUIInventoryData& inPlayerInventory);
    
};

