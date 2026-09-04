#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YWidgetController_ItemValue.generated.h"

class UYWidget_ValueDisplay;

UCLASS(Blueprintable)
class UYWidgetController_ItemValue : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_ItemValue();

protected:
    UFUNCTION(BlueprintCallable)
    void OnValueUpdated(UYWidget_ValueDisplay* Widget);
    
};

