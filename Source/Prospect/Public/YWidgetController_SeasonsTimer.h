#pragma once
#include "CoreMinimal.h"
#include "YWidgetController_Timer.h"
#include "YWidgetController_SeasonsTimer.generated.h"

UCLASS(Blueprintable)
class UYWidgetController_SeasonsTimer : public UYWidgetController_Timer {
    GENERATED_BODY()
public:
    UYWidgetController_SeasonsTimer();

private:
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
};

