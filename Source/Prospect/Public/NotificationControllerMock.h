#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NotificationControllerMock.generated.h"

class UYNotificationData;

UCLASS(Blueprintable)
class UNotificationControllerMock : public UObject {
    GENERATED_BODY()
public:
    UNotificationControllerMock();

    UFUNCTION(BlueprintCallable)
    void OnNotificationDataUpdated(UYNotificationData* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationDataAdded(UYNotificationData* Data);
    
};

