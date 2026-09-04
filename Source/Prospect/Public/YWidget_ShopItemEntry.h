#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YPlayfabStoreItemEntry.h"
#include "YWidget_ShopItemEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ShopItemEntry : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_ShopItemEntry();

protected:
    UFUNCTION(BlueprintCallable)
    void StartPurchase(const FYPlayfabStoreItemEntry& storeItem);
    
};

