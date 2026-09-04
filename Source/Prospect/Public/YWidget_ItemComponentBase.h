#pragma once
#include "CoreMinimal.h"
#include "EYDeviceClass.h"
#include "EYItemType.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YInventoryItem.h"
#include "YWidget_ItemComponentBase.generated.h"

class UDragDropOperation;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentBase : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_parentItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_exclusiveTypesToShowWidgetFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_itemTypesToHideWidgetFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDeviceClass> m_exlcudingDeviceClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showOnlyForItemsWithItemBackendIdSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useOutsideOfItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_removeFromHierarchy;
    
public:
    UYWidget_ItemComponentBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldComponentBeShown() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsItemInstanceEqualToAssignedInventoryItem(const FYInventoryItem& Item) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSetItem();
    
    UFUNCTION(BlueprintCallable)
    void HandleResetItem();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemSelected(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemReleased(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPressed(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemHovered(UYWidget_ItemContainer* itemWidget, bool Hovered);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDrop(UYWidget_ItemContainer* itemWidget, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemDragDetected(UYWidget_ItemContainer* itemWidget, bool isDragging, UDragDropOperation* InOperation);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* itemWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemActiveChanged(UYWidget_ItemContainer* itemWidget, bool IsActive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetAssignedItemRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForceTooltipUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemSelectedChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemHoveredChanged(bool Hovered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemDrop(UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemDragDetected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemActiveChanged(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleSetItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleResetItem();
    
};

