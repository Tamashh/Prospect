#pragma once
#include "CoreMinimal.h"
#include "YShopPromotion.h"
#include "YWidgetController_Timer.h"
#include "YWidgetController_ShopTimer.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_ShopTimer : public UYWidgetController_Timer {
    GENERATED_BODY()
public:
    UYWidgetController_ShopTimer();

private:
    UFUNCTION(BlueprintCallable)
    void OnActivePromotionsUpdated(const TArray<FYShopPromotion>& activePromotions);
    
};

