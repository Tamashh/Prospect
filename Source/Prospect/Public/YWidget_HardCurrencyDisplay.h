#pragma once
#include "CoreMinimal.h"
#include "YCurrency.h"
#include "YWidget.h"
#include "YWidget_HardCurrencyDisplay.generated.h"

class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_HardCurrencyDisplay : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
public:
    UYWidget_HardCurrencyDisplay();

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrencyUpdated(const FYCurrency& Currency);
    
};

