#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_SoftCurrencyDisplay.generated.h"

class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SoftCurrencyDisplay : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_softCurrencyRowHandle;
    
public:
    UYWidget_SoftCurrencyDisplay();

private:
    UFUNCTION(BlueprintCallable)
    void OnCurrenciesUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSetUpperCap(int32 Value);
    
};

