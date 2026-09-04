#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YNotificiationDataRequest.h"
#include "YNotificationComponent.generated.h"

class UObject;
class UYNotificationData;
class UYNotificationDataCollection;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYNotificationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNotificationDataCollection* m_playerActionNotifications;
    
    UYNotificationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void AddNotificationDataStatic(UObject* objectContext, FYNotificiationDataRequest notificationData);
    
    UFUNCTION(BlueprintCallable)
    void AddNotificationData(UYNotificationData* notificationData, bool triggerUpdate);
    
};

