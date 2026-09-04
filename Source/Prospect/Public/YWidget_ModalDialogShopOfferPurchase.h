#pragma once
#include "CoreMinimal.h"
#include "EYOfferUnavailableReason.h"
#include "EYPurchaseOfferResult.h"
#include "YShopOffer.h"
#include "YWidget_ModalDialogOkCancel.h"
#include "EYShopOfferPurchaseDialogState.h"
#include "YWidget_ModalDialogShopOfferPurchase.generated.h"

class UButton;
class UPanelWidget;
class UTextBlock;
class UWidgetAnimation;
class UYEditableTextBox;
class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_ModalDialogShopOfferPurchase : public UYWidget_ModalDialogOkCancel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPurchaseSuccessful);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_modalDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYShopOfferPurchaseDialogState m_currentOfferPurchaseDialogState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYEditableTextBox* m_quantityEditableTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_quantityUpButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_quantityDownButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_unavailableReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAllowedQuantity;
    
public:
    UYWidget_ModalDialogShopOfferPurchase();

private:
    UFUNCTION(BlueprintCallable)
    void SetPurchaseOfferResult(const FText& resultCode, bool purchaseSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnQuantityUpButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnQuantityTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void OnQuantityDownButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnPurchaseSuccessfulAnimationFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnOfferPurchaseTimedOut();
    
    UFUNCTION(BlueprintCallable)
    void OnOfferPurchaseResponse(const FYShopOffer& offer, EYPurchaseOfferResult purchaseOfferResult);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetForSinglePurchase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetForMultiPurchase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_SetCurrentOfferPurchaseDialogState(EYShopOfferPurchaseDialogState shopOfferPurchaseDialogState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PurchaseUnavailableUpdated(const EYOfferUnavailableReason unavailableReason);
    
};

