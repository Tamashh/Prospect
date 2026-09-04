#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYNotificationAction.h"
#include "YSocialNotification.h"
#include "YNotificationsManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYNotificationsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYSocialNotification> m_pendingNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYSocialNotification> m_permamentPendingNotifications;
    
    UYNotificationsManager();

    UFUNCTION(BlueprintCallable)
    static bool RequestSocialNotification(UObject* objectContext, const FYSocialNotification& Data);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestPermamentNotification(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveNotificationWithID(UObject* objectContext, const FString& ID);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSocialProfileUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    static bool ExecuteSocialNotificationActionById(UObject* objectContext, const FString& ID, EYNotificationAction Action);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteSocialNotificationAction(UObject* objectContext, const FYSocialNotification& Data, EYNotificationAction Action);
    
};

