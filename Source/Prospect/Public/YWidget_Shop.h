#pragma once
#include "CoreMinimal.h"
#include "EYShopCategory.h"
#include "YWidget.h"
#include "YWidget_Shop.generated.h"

class UWidgetSwitcher;
class UYWidget_CurrencyOffersOverview;
class UYWidget_ItemContainer;
class UYWidget_OfferDetailOverview;
class UYWidget_PackOffersOverview;
class UYWidget_SeasonOffersOverview;
class UYWidget_ShopCategories;
class UYWidget_SpecialOffersOverview;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_Shop : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_CurrencyOffersOverview* m_currencyOffersOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SeasonOffersOverview* m_seasonOffersOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PackOffersOverview* m_packOffersOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferDetailOverview* m_offerDetailOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ShopCategories* m_shopCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_widgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SpecialOffersOverview* m_dailyOffersOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SpecialOffersOverview* m_weeklyOffersOverview;
    
public:
    UYWidget_Shop();

protected:
    UFUNCTION(BlueprintCallable)
    void SetupSeasonOffersOverview();
    
    UFUNCTION(BlueprintCallable)
    void SetupPackOffersOverview();
    
    UFUNCTION(BlueprintCallable)
    void SetupCurrencyOffersOverview();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleQuickMenuVisibility(bool isQuickMenuVisible);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnGoToFounderPacksOffers();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnGoToCurrencyOffers();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonFromItemDetailOverview();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleCategoryClicked(EYShopCategory selectedCategory);
    
};

