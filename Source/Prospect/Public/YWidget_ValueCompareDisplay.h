#pragma once
#include "CoreMinimal.h"
#include "YWidget_ValueDisplay.h"
#include "YWidget_ValueCompareDisplay.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ValueCompareDisplay : public UYWidget_ValueDisplay {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_shouldValueText;
    
public:
    UYWidget_ValueCompareDisplay();

};

