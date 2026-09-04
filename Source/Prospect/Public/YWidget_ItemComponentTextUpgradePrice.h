#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextUpgradePrice.generated.h"

class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextUpgradePrice : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
public:
    UYWidget_ItemComponentTextUpgradePrice();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canPurchaseOffer);
    
};

