#pragma once
#include "CoreMinimal.h"
#include "YShopPromotion.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_PackOffersOverview.generated.h"

class UYWidget_ItemContainer;
class UYWidget_OfferListContainer;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_PackOffersOverview : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemClickedSignature, UYWidget_ItemContainer*, itemWidget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OfferListContainer* m_packOfferListContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_packWeeklyOffers;
    
public:
    UYWidget_PackOffersOverview();

protected:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleItemClicked(UYWidget_ItemContainer* SelectedItem);
    
};

