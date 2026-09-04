#pragma once
#include "CoreMinimal.h"
#include "EYCurrencyType.h"
#include "YWidget.h"
#include "YWidget_PriceGeneric.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PriceGeneric : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_PriceGeneric();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPriceText(const FText& PriceText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetCurrencyType(const EYCurrencyType currencyType);
    
};

