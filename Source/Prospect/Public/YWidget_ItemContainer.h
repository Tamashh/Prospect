#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "EYPlayerSetType.h"
#include "Templates/SubclassOf.h"
#include "YInventoryItem.h"
#include "YItemContainerData.h"
#include "YShopItem.h"
#include "YWidgetView_Item.h"
#include "YWidget_ItemContainer.generated.h"

class UDragDropOperation;
class UYWidget_ItemComponentBase;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemContainer : public UYWidgetView_Item {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnSetItemUnhoveredSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSetItemHoveredSignature, FYInventoryItem, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnSetItemClickedSignature, UYWidget_ItemContainer*, setItemWidget, FYInventoryItem, Item, EYPlayerSetType, setType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemSetSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSelectedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnItemResetSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemReleasedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemPressedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemHoveredSignature, UYWidget_ItemContainer*, itemWidget, bool, Hovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemDropSignature, UYWidget_ItemContainer*, itemWidget, UDragDropOperation*, Operation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemDragDetectedSignature, UYWidget_ItemContainer*, itemWidget, bool, isDragging, UDragDropOperation*, DragDropOperation);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDoubleClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemActiveChangedSignature, UYWidget_ItemContainer*, itemWidget, bool, IsActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDisplayMaterialItemInfo, const FText&, itemDisplayName, const FText&, itemDescription);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCraftingBlueprintRowHandleItemSet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSetSignature OnItemSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemResetSignature OnItemReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftingBlueprintRowHandleItemSet OnCraftingBlueprintRowHandleItemSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClickedSignature OnItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDoubleClickedSignature OnItemDoubleClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPressedSignature OnItemPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemReleasedSignature OnItemReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSelectedSignature OnItemSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemHoveredSignature OnItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemActiveChangedSignature OnItemActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDragDetectedSignature OnItemDragDetected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDropSignature OnItemDropSignature;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemClickedSignature OnSetItemClickedDelegate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemHoveredSignature OnSetItemHoveredDelegate;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemUnhoveredSignature OnSetItemUnhoveredDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemContainerData m_itemContainerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_assignedInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_itemBackendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_offerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemType m_itemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemRarityType m_itemRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_shopItemBelongsTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_itemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_relatedItemRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_relatedCustomItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_resetItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_purchaseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxPurchaseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_purchasePrice;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isItemActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisplayMaterialItemInfo OnDisplayMaterialItemInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemComponentBase*> m_itemComponentsOutsideHierarchy;
    
public:
    UYWidget_ItemContainer();

    UFUNCTION(BlueprintCallable)
    static bool ShouldShowWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAllowInspectionOnClick() const;
    
    UFUNCTION(BlueprintCallable)
    void SetupFromShopOfferId(const FString& OfferId);
    
    UFUNCTION(BlueprintCallable)
    void SetupFromInventoryItem(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSelected(bool IsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetIsItemActive(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault(bool resetRarityToo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemComponent(UYWidget_ItemComponentBase* itemComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShopOffer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemInstanceEqualToAssignedInventoryItem(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemBlueprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFactionStoreItem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFactionStorePrice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFactionStoreAmountPerPurchase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCustomOrBaseItemID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYShopItem GetCorrespondingShopItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidget_ItemComponentBase* GetComponentOfClass(TSubclassOf<UYWidget_ItemComponentBase> itemComponentClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYPlayerSetType GetAssignedPlayerSetType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInventoryItem GetAssignedInventoryItem() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_SetupFromItemContainerData(const FYItemContainerData& itemContainerData);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetupFromBlueprintId(const FName& blueprintId, EYItemRarityType itemRarity, const FString& shopItemBelongsTo, const FString& relatedId);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetupFromBaseItemIdWithRelatedItem(const FString& baseItemId, const FString& itemBackendId, const FString& relatedBaseItemId, const FString& relatedCustomItemId);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetupFromBaseItemId(const FString& baseItemId, const FString& itemBackendId, const EYItemRarityType itemRarity);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetupBackendItem(const FString& baseItemId, const FString& itemBackendId, const FString& shopItemBelongsTo, const EYItemRarityType itemRarity, const int32 repeatTimes);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetIsSelected(bool IsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandlePurchaseAmountChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddItemComponent(UYWidget_ItemComponentBase* itemComponentClass, bool Visible);
    
    UFUNCTION(BlueprintCallable)
    UYWidget_ItemComponentBase* AddItemComponent(TSubclassOf<UYWidget_ItemComponentBase> itemComponentClass, bool Visible);
    
};

