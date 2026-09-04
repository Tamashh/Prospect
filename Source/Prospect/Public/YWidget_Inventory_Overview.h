#pragma once
#include "CoreMinimal.h"
#include "YWidget_Inventory_Base.h"
#include "YWidget_Inventory_Overview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inventory_Overview : public UYWidget_Inventory_Base {
    GENERATED_BODY()
public:
    UYWidget_Inventory_Overview();

    UFUNCTION(BlueprintCallable)
    void OnInventoryStateLeft_Callback();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryStateEntered_Callback();
    
};

