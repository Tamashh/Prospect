#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YItemStatOldValNewVal.h"
#include "YWidget.h"
#include "EYItemImprovementScreenSlotType.h"
#include "EYItemStatsType.h"
#include "YUiPopupItemSuccessfulActionPreviewData.h"
#include "YUiPopupItemSuccessfulTunedPreviewData.h"
#include "YWidget_ItemsImprovementScreen.generated.h"

class APlayerState;
class UYStateInventoryComponent;
class UYWidget_ItemContainer;
class UYWidget_PlayerItemsOverview;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemsImprovementScreen : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PlayerItemsOverview* m_playerAllItemsWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_priceAndRecipeInfo;
    
public:
    UYWidget_ItemsImprovementScreen();

private:
    UFUNCTION(BlueprintCallable)
    void ShowItemSuccessfullyUpgradedPopup(const FYCustomItemInfo& updatedItem);
    
    UFUNCTION(BlueprintCallable)
    void ShowItemSuccessfullyTunedPopup(const FYCustomItemInfo& updatedItem, const FYItemStatOldValNewVal& itemsStatOldValNewVal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupItemPriceAndRecipe(UYWidget_ItemContainer* itemToShowPriceAndRecipeInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(APlayerState* State);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdate(UYStateInventoryComponent* inventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot(const EYItemImprovementScreenSlotType slotType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TuningOnItemPerformedSuccessfully(const FYUiPopupItemSuccessfulTunedPreviewData& uiPopupItemSuccessfulTunedPreviewData, const EYItemStatsType itemStatsType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetupItemPriceAndRecipe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RefreshScreenInterfaceAfterSuccessfulActionOnItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemActionPerformedSuccessfully(const FYUiPopupItemSuccessfulActionPreviewData& uiPopupItemSuccessfulActionPreviewData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ClearSlot(const EYItemImprovementScreenSlotType slotType);
    
};

