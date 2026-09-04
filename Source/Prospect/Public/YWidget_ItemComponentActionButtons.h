#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YCustomItemInfo.h"
#include "YFactionProgress.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentActionButtons.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentActionButtons : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSwapButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPurchaseButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModifyButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEquipButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelButtonClicked, UYWidget_ItemContainer*, SelectedItem);
    
    UYWidget_ItemComponentActionButtons();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SwapButtonClicked() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVanityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnModSlotUpdated(const FYCustomItemInfo& customItemInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalPlayerCurrenciesUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items);
    
    UFUNCTION(BlueprintCallable)
    void OnFactionProgressionUpdate(const TArray<FYFactionProgress>& factionProgress);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ModifyButtonClicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EquipButtonClicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CraftButtonClicked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void CancelButtonClicked() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CanAffordMultipleFactionStorePurchase(const int32 Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowButtonsForInventoryItem(bool canEquip, EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowButtonsForBlueprintItem(bool canCraft);
    
};

