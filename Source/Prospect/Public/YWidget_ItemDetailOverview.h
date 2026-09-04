#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YInputStackInterface.h"
#include "YInventoryItem.h"
#include "YWidget_ItemDetailOverview.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemDetailOverview : public UYWidget, public IYInputStackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackButtonClickedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonClickedSignature OnBackButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_blueprintDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isRequestingCustomizationModeChanges;
    
public:
    UYWidget_ItemDetailOverview();

private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(const TArray<FYInventoryItem>& inventoryItems);
    
    UFUNCTION(BlueprintCallable)
    void HandleVanitySelected(UYWidget_ItemContainer* selectedVanity);
    
    UFUNCTION(BlueprintCallable)
    void HandleEquipButtonClicked(UYWidget_ItemContainer* SelectedItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonWidgetClicked();
    

    // Fix for true pure virtual functions not being implemented
};

