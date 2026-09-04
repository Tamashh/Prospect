#pragma once
#include "CoreMinimal.h"
#include "EYGrantType.h"
#include "EYPromotionType.h"
#include "YShopPromotion.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_SpecificOffersOverview.generated.h"

class UYWidget_ItemContainer;
class UYWidget_OfferListContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_SpecificOffersOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGoToCurrencyOffers);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackButtonClickedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonClickedSignature OnBackButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferListContainer* m_offerListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_dummyOffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_overrideOfferLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_overrideOfferLayoutIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPromotionType m_exclusivePromotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGrantType m_exclusiveGrantType;
    
public:
    UYWidget_SpecificOffersOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void HandleBackButtonWidgetClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void GoToCurrencyOffers();
    
};

