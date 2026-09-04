#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonsData.h"
#include "YShopPromotion.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_SeasonOffersOverview.generated.h"

class UYWidget_ItemContainer;
class UYWidget_OfferListContainer;
class UYWidget_Timer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_SeasonOffersOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGoToCurrencyOffers);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferListContainer* m_seasonOfferListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Timer* m_seasonOffersTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_dummySeasonOffers;
    
public:
    UYWidget_SeasonOffersOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSeasonsDataUpdated(const FYPlayerSeasonsData& playerSeasonsData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
private:
    UFUNCTION(BlueprintCallable)
    void GoToCurrencyOffers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeasonProgressDataUpdated();
    
};

