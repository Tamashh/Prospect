#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YNotificationDataCollection.generated.h"

class UYNotificationData;

UCLASS(Blueprintable)
class UYNotificationDataCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotificationDelegate, UYNotificationData*, notificationData);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYNotificationData*> m_notificationData;
    
public:
    UYNotificationDataCollection();

    UFUNCTION(BlueprintCallable)
    void RemoveNotificationData(UYNotificationData* notificationData);
    
    UFUNCTION(BlueprintCallable)
    void AddNotificationData(UYNotificationData* notificationData, bool triggerUpdate);
    
};

