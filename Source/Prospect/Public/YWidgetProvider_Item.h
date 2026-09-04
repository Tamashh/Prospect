#pragma once
#include "CoreMinimal.h"
#include "EYInventoryListType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_Item.generated.h"

UCLASS(Blueprintable)
class UYWidgetProvider_Item : public UYWidgetProvider {
    GENERATED_BODY()
public:
    UYWidgetProvider_Item();

    UFUNCTION(BlueprintCallable)
    void SetInventoryType(EYInventoryListType listType);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryItemData(FYInventoryItem Item, EYPlayerSetType setType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetInventoryType(EYInventoryListType listType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetInventoryItemData(FYInventoryItem Item, EYPlayerSetType setType);
    
};

