#pragma once
#include "CoreMinimal.h"
#include "YInboxMessage.h"
#include "YWidget.h"
#include "YWidget_InboxTopMenu.generated.h"

class UYWidget_NotificationNumber;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_InboxTopMenu : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_NotificationNumber* m_notificationNumber;
    
public:
    UYWidget_InboxTopMenu();

private:
    UFUNCTION(BlueprintCallable)
    void HandleInboxUpdated(const TArray<FYInboxMessage>& inboxMessages);
    
};

