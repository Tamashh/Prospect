#pragma once
#include "CoreMinimal.h"
#include "YShopPromotion.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_CurrencyOffersOverview.generated.h"

class UYWidget_ItemContainer;
class UYWidget_OfferListContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_CurrencyOffersOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGoToFounderPacksOffers);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGoToFounderPacksOffers OnGoToFounderPacksOffers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferListContainer* m_currencyListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_dummyCurrencyOffers;
    
public:
    UYWidget_CurrencyOffersOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
};

