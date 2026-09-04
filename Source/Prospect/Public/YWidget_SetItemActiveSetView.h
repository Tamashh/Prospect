#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YWidget.h"
#include "EYInventoryListType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemClickedSignatureDelegate.h"
#include "YOnInventoryItemDetailViewDelegate.h"
#include "YOnInventoryItemDraggingItemDelegate.h"
#include "YOnInventoryItemHoveredSignatureDelegate.h"
#include "YOnInventoryItemUnhoveredSignatureDelegate.h"
#include "YWidget_SetItemActiveSetView.generated.h"

class UDragDropOperation;
class UYWidget_ItemContainer;
class UYWidget_SetItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SetItemActiveSetView : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_pistolSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_weaponOneSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_weaponTwoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_toolOneSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_toolTwoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_abilityOneSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_abilityTwoSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_bagSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SetItem* m_helmetSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_selectedItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemClickedSignature OnInventoryItemClickedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemDetailView OnInventoryItemDetailView;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemHoveredSignature OnInventoryItemHoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemUnhoveredSignature OnInventoryItemUnhoveredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInventoryItemDraggingItem OnInventoryItemDraggingItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_slotType;
    
public:
    UYWidget_SetItemActiveSetView();

protected:
    UFUNCTION(BlueprintCallable)
    void SetInventorySlotItem(UYWidget_SetItem* SetItem, const FYInventoryItem& inventoryItem, EYPlayerSetType playerSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemHovered(FYInventoryItem hoveredItem);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemDragDetected(UYWidget_ItemContainer* itemWidget, bool isDragging, UDragDropOperation* DragDropOperation);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemDetail(FYInventoryItem Item);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemClicked(UYWidget_ItemContainer* setItemWidget, FYInventoryItem Item, EYPlayerSetType setType);
    
    UFUNCTION(BlueprintCallable)
    UYWidget_SetItem* GetSetItemSlotForType(EYPlayerSetType itemSetType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCurrentBagItemAmount(int32 Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetBagLimit(int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetActiveSetValue(int32 Value, float bagWeight, float safeWeight);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDraggingItem(EYItemType ItemType, bool isDragging, const FYInventoryItem& Item);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_SetItem* BP_CreateInventoryItem(FYInventoryItem Item, EYPlayerSetType setSlottype, EYInventoryListType listType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_SetItem* BP_CreateEmptyButton(EYInventoryListType listType, EYPlayerSetType setSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearItems();
    
};

