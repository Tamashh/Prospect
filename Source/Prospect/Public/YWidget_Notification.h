#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "YWidget.h"
#include "YNotificationFinishedDelegate.h"
#include "YOnNotificationActionDelegate.h"
#include "YSocialNotification.h"
#include "YWidget_Notification.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Notification : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNotificationFinished OnRequestRemoveNotification;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnNotificationAction OnNotificationActionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSocialNotification m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_notificationCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_notificationTimerHandle;
    
    UYWidget_Notification();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimerFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeData(FYSocialNotification Data, int32 counter);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartNotification();
    
};

