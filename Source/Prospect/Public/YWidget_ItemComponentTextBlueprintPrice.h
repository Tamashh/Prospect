#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentTextBlueprintPrice.generated.h"

class UYWidget_PriceGeneric;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextBlueprintPrice : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_PriceGeneric* m_priceWidget;
    
public:
    UYWidget_ItemComponentTextBlueprintPrice();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canPurchaseOffer);
    
};

