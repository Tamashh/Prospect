#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YWidget_NotificationItem.generated.h"

class UTextBlock;
class UYNotificationData;
class UYWidget_NotificationItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_NotificationItem : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAnimateVisibilityFinishedDelegate, UYWidget_NotificationItem*, invisibleWidget);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* instInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYNotificationData* m_notificationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_onItemShownSFX;
    
public:
    UYWidget_NotificationItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeout();
    
};

