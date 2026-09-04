#pragma once
#include "CoreMinimal.h"
#include "EYOfferUnavailableReason.h"
#include "YCurrency.h"
#include "YGrant.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextOfferPrice.generated.h"

class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextOfferPrice : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
public:
    UYWidget_ItemComponentTextOfferPrice();

private:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnGrantsUpdated(const TArray<FYGrant>& activeOffers);
    
    UFUNCTION(BlueprintCallable)
    void OnCurrencyUpdated(const FYCurrency& Currency);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canPurchaseOffer, const EYOfferUnavailableReason unavailableReason, const FText& unavailableReasonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AssociatedOffers(const TArray<FString>& offerIds);
    
};

