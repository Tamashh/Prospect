#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YWidgetController_ItemContainerCrafting.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_ItemContainerCrafting : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_ItemContainerCrafting();

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrenciesUpdated();
    
};

