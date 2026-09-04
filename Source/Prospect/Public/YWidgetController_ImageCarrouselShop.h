#pragma once
#include "CoreMinimal.h"
#include "YShopPromotion.h"
#include "YWidgetController.h"
#include "YWidgetController_ImageCarrouselShop.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_ImageCarrouselShop : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_ImageCarrouselShop();

private:
    UFUNCTION(BlueprintCallable)
    void OnPromotionsUpdated(const TArray<FYShopPromotion>& activeOffers);
    
};

