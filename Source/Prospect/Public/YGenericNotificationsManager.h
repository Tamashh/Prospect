#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "YNotificationDescription.h"
#include "YGenericNotificationsManager.generated.h"

class UYGenericNotificationsManager;
class UYGenericNotificationsModel;
class UYNotificationController;

UCLASS(Blueprintable)
class UYGenericNotificationsManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYShowNotification, const FYNotificationDescription&, notificationDescription, UYNotificationController*, notificationController);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYShowNotification OnShowNotification;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGenericNotificationsModel* m_model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_updateReadNotificationsHandle;
    
public:
    UYGenericNotificationsManager();

    UFUNCTION(BlueprintCallable)
    void SetReadyToShowNotifications(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void ProcessNotifications();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYGenericNotificationsManager* FindGenericNotificationsManager(const UObject* objCtx);
    
private:
    UFUNCTION(BlueprintCallable)
    void BindSignalRHandlers();
    
};

