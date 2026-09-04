#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EYNotificationAction.h"
#include "YOnTriggerNotificationActionDelegate.h"
#include "YSocialNotification.h"
#include "YWidget_NotificationsManager.generated.h"

class UVerticalBox;
class UYWidget_Notification;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_NotificationsManager : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTriggerNotificationAction OnTriggerNotificationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UYWidget_Notification*> m_notificationWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_notificationPanel;
    
public:
    UYWidget_NotificationsManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRemoveSocialNotification(const FYSocialNotification& notification);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationRequestVisibilityChange(int32 Handle, bool animate);
    
    UFUNCTION(BlueprintCallable)
    void OnNotificationAction(int32 Handle, EYNotificationAction Action);
    
    UFUNCTION(BlueprintCallable)
    void OnAnimateVisibilityFinishedEntry(UYWidget* Widget, ESlateVisibility newVisibility);
    
    UFUNCTION(BlueprintCallable)
    void OnAddSocialNotification(const FYSocialNotification& notification);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_Notification* BP_CreateAndAddNotificationWidget(FYSocialNotification notificationData);
    
};

