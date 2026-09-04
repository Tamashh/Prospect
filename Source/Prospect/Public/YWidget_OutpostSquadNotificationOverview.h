#pragma once
#include "CoreMinimal.h"
#include "YSquadInvite.h"
#include "YWidget.h"
#include "YWidget_OutpostSquadNotificationOverview.generated.h"

class UYWidget_OutpostSquadNotification;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OutpostSquadNotificationOverview : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UYWidget_OutpostSquadNotification*> m_squadNotifications;
    
    UYWidget_OutpostSquadNotificationOverview();

    UFUNCTION(BlueprintCallable)
    void OnNotificationWidgetClosed(int32 notificationId);
    
    UFUNCTION(BlueprintCallable)
    void CreateNotification(const FYSquadInvite& squadInvite, const FText& Message, bool isSquadInvite);
    
    UFUNCTION(BlueprintCallable)
    void CreateBaseNotification(const FText& Message);
    
    UFUNCTION(BlueprintCallable)
    void ClearExpiredInvite(const FString& inviteId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemoveNotificationWidget(const UYWidget_OutpostSquadNotification* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_OutpostSquadNotification* BP_CreateAndAddNotificationWidget();
    
};

