#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_OfferDetailOverview.generated.h"

class UYWidget_ItemActionsPanel;
class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OfferDetailOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGoToCurrencyOffers);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackButtonClickedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonClickedSignature OnBackButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_offerDetailWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemContainer* m_itemInfoWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemActionsPanel* m_itemActionsPanel;
    
public:
    UYWidget_OfferDetailOverview();

    UFUNCTION(BlueprintCallable)
    void HandleOnLeaveCurrentScreenConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOfferItemClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonWidgetClicked();
    
};

