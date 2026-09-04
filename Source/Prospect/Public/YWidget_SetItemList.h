#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYInventoryListType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YPlayerInventory.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_SetItemList.generated.h"

class APlayerState;
class UYStateInventoryComponent;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SetItemList : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_currentAvailableItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sendInventoryUpdateOnDestruct;
    
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
    void BP_RemoveItems(const TArray<FYInventoryItem>& itemsToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateInventoryItem(FYInventoryItem Item, EYPlayerSetType setSlottype, EYInventoryListType listType, bool isEquipped, int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddStashItemToScreen(UYWidget_ItemContainer* itemContainer, bool highlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddStashItemsToScreen(const TArray<UYWidget_ItemContainer*>& itemContainers, const TArray<UYWidget_ItemContainer*>& itemContainersToHighlight);
    

    // Fix for true pure virtual functions not being implemented
};

