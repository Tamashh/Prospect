#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "YLazyScrollGridHostInterface.h"
#include "EYInventoryListType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YPlayerInventory.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_SetItemList.generated.h"

class APlayerState;
class UYLazyScrollGrid;
class UYStateInventoryComponent;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_SetItemList : public UYWidget, public IYResourceExecutionInterface, public IYLazyScrollGridHostInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_currentAvailableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sendInventoryUpdateOnDestruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYLazyScrollGrid* m_scrollGrid;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_cachedStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_inventoryWidgetsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> m_sortedItemUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_createItemContainerRequestHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_fillItemContainersRequestHandles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxItemToLoad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_availableItemContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_cachedItemAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_itemsToHighlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemContainersToHighlight;
    
public:
    UYWidget_SetItemList();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBackendData();
    
private:
    UFUNCTION(BlueprintCallable)
    void RefreshSorting();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdate(UYStateInventoryComponent* stateInventoryComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateItems(const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TrySetItemVisibility(UYWidget_ItemContainer* itemContainer, ESlateVisibility itemVisibility);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemoveItems(const TArray<FYInventoryItem>& itemsToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_LoadGridItem(UYWidget_ItemContainer* itemWidget, const FYInventoryItem& inventoryItem, bool wasLoadedOnce);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateInventoryItem(FYInventoryItem Item, EYPlayerSetType setSlottype, EYInventoryListType listType, bool isEquipped, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddStashItemToScreen(UYWidget_ItemContainer* itemContainer, bool highlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddStashItemsToScreen(const TArray<UYWidget_ItemContainer*>& itemContainers, const TArray<UYWidget_ItemContainer*>& itemContainersToHighlight);
    

    // Fix for true pure virtual functions not being implemented
};

