#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "YInventoryItem.h"
#include "YWidget_PickupPlate_Base.generated.h"

class AYPickupActor;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_PickupPlate_Base : public UUserWidget {
    GENERATED_BODY()
public:
    UYWidget_PickupPlate_Base();

    UFUNCTION(BlueprintCallable)
    void SetItem(const AYPickupActor* interactionPickupActor, const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemSet(const AYPickupActor* interactionPickupActor, const FYInventoryItem& inventoryItem);
    
};

