#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YWidgetController_ExitToStation.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_ExitToStation : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_ExitToStation();

    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

