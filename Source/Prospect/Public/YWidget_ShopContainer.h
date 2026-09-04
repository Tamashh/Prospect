#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YPlayfabStoreItemEntry.h"
#include "Templates/SubclassOf.h"
#include "YWidget_ShopContainer.generated.h"

class UYWidget_ShopItemEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ShopContainer : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ShopItemEntry> m_entryWBP;
    
public:
    UYWidget_ShopContainer();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayfabShopItemPurchaseCompleted(const FYPlayfabStoreItemEntry& storeItem, bool success);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayfabShopItemPurchaseCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ShopItemEntry* BP_CreateAndAddEntry(const FYPlayfabStoreItemEntry& storeItemEntry);
    
};

