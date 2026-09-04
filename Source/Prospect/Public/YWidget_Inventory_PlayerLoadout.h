#pragma once
#include "CoreMinimal.h"
#include "YUIInventoryData.h"
#include "YWidget_Inventory_Base.h"
#include "YWidget_Inventory_PlayerLoadout.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_PlayerLoadout : public UYWidget_Inventory_Base {
    GENERATED_BODY()
public:
    UYWidget_Inventory_PlayerLoadout();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerInventoryDataUpdated(const FYUIInventoryData& inPlayerInventory);
    
};

