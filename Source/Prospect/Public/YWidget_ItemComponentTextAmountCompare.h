#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentTextAmount.h"
#include "YWidget_ItemComponentTextAmountCompare.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentTextAmountCompare : public UYWidget_ItemComponentTextAmount {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_compareValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_compareValue;
    
public:
    UYWidget_ItemComponentTextAmountCompare();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideCompareValue();
    
};

