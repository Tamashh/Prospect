#pragma once
#include "CoreMinimal.h"
#include "YUIInventoryData.h"
#include "YWidget_Inventory_Base.h"
#include "YWidget_Inventory_PlayerBag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_PlayerBag : public UYWidget_Inventory_Base {
    GENERATED_BODY()
public:
    UYWidget_Inventory_PlayerBag();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerInventoryDataUpdated(const FYUIInventoryData& inPlayerInventory);
    
};

