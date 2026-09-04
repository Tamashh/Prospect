#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.h"
#include "YCurrency.h"
#include "YFactionProgress.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "EYItemActionType.h"
#include "YWidget_ItemActionsPanel.generated.h"

class UAudioComponent;
class UWidget;
class UWidgetSwitcher;
class UYWidget_ItemActionButton;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemActionsPanel : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnequipButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeaveCurrentScreenClicked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGoToDetailsButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_chooseEquipSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_equipOnDoubleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_craftOnDoubleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_goToDetailsOnDoubleClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_concealSelectedItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemActionType> m_availableItemActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_selectedItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_offerItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_informationPanelsWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_emptyWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_selectItemWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_itemNameWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_itemNameAndCraftingPriceWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_craftingInProgressWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_craftingFinishedWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_offerPurchaseWidgetSwitcherElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioEquipItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioSetMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioClearMod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioCraftingInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioCraftingCanceled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioCraftingFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_audioComponentCraftingInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<EYItemActionType, UYWidget_ItemActionButton*> m_itemActionButtons;
    
public:
    UYWidget_ItemActionsPanel();

private:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseSuccessful();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerCurrenciesUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveCurrentScreenConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void OnFactionProgressionUpdate(const TArray<FYFactionProgress>& factionProgress);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrencyUpdated(const FYCurrency& Currency);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsChooseEquipSlotMode() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void InitializeButtons();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleSelectedItemDoubleClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemSelected(UYWidget_ItemContainer* SelectedItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleItemActionButtonClicked(UYWidget_ItemActionButton* itemActionButton);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateOfferPriceText(const FText& Text, const EYCurrencyType currencyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateItemName(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleBackgroundBlur(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartCraftingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemActionButton* BP_CreateAndAddItemActionButton(EYItemActionType actionType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CancelCraftingAnimation();
    
};

