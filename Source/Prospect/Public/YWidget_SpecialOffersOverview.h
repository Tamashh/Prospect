#pragma once
#include "CoreMinimal.h"
#include "EYPromotionType.h"
#include "YShopPromotion.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_SpecialOffersOverview.generated.h"

class UYWidget_ItemContainer;
class UYWidget_OfferListContainer;
class UYWidget_Timer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_SpecialOffersOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPromotionType m_promotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferListContainer* m_offerListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Timer* m_offersTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_dummyOffers;
    
public:
    UYWidget_SpecialOffersOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
};

