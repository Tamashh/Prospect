#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "EYModificationSlotType.h"
#include "EYVanityType.h"
#include "Templates/SubclassOf.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentSubItems.generated.h"

class UPanelWidget;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentSubItems : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSubItemHoveredSignature, UYWidget_ItemContainer*, itemWidget, bool, Hovered);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubItemEquip, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSubItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnModificationSlotTypeChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubItemClickedSignature OnSubItemClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSubItemHoveredSignature OnSubItemHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModificationSlotTypeChanged OnModificationSlotChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPanelWidget> m_itemListPanelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ItemContainer> m_itemEntryWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemType m_exclusiveItemTypeOfSubItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_exclusiveVanityTypeOfSubItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_panelWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceSelectFirtEntry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_cachedSelectedItemContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_createdShopItemCount;
    
public:
    UYWidget_ItemComponentSubItems();

    UFUNCTION(BlueprintCallable)
    void ToggleVisibilityOfInventoryItems(bool visibile);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSubItemHovered(UYWidget_ItemContainer* itemSelected, bool Hovered);
    
    UFUNCTION(BlueprintCallable)
    void HandleSubItemEquip(UYWidget_ItemContainer* itemSelected);
    
    UFUNCTION(BlueprintCallable)
    void HandleSubItemClicked(UYWidget_ItemContainer* itemSelected);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYModificationSlotType GetCurrentModificationSlotType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCreatedShopItemsCount() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPanelWidget* BP_CreateAndAddItemListPanelWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemEntryWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyModSlotTypeFilter(EYModificationSlotType modSlotType);
    
};

