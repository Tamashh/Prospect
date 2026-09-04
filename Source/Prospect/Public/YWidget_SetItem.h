#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YOnSetItemDetailViewDelegate.h"
#include "YUIWeaponAmmoData.h"
#include "YWidget_ItemContainer.h"
#include "YWidget_SetItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SetItem : public UYWidget_ItemContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemDetailView OnSetItemDetailView;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSmallBagPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_inventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerSetType m_itemSlotType;
    
public:
    UYWidget_SetItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWeaponCounters(const FYUIWeaponAmmoData& uiWeaponAmmoData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetVisibilityAmmoCompatibilityHint(bool shouldBeVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetUIInventoryItemData(FYInventoryItem Item, EYPlayerSetType setType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsItemAlreadyEquipped(bool isEquipped);
    
};

