#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YWidgetController_Notification.generated.h"

class UYNotificationData;

UCLASS(Blueprintable)
class UYWidgetController_Notification : public UYWidgetController {
    GENERATED_BODY()
public:
    UYWidgetController_Notification();

private:
    UFUNCTION(BlueprintCallable)
    void OnNotificationAdded(UYNotificationData* Data);
    
};

