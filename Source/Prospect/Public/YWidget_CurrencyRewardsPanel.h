#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YTotalGainedCurrencyData.h"
#include "YWidget_CurrencyRewardsPanel.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_CurrencyRewardsPanel : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_CurrencyRewardsPanel();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_GainedCurrency(const TArray<FYTotalGainedCurrencyData>& Data);
    
};

