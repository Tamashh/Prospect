#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYNotificationType.h"
#include "Templates/SubclassOf.h"
#include "YWidget_NotificationPanel.generated.h"

class UVerticalBox;
class UYWidget_NotificationItem;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_NotificationPanel : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYNotificationType, TSubclassOf<UYWidget_NotificationItem>> m_itemMap;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_rightMiddleVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_topRightVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_centerVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_leftMiddleVerticalBox;
    
public:
    UYWidget_NotificationPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void ReturnFreeNotificationItem(UYWidget_NotificationItem* notificationItem);
    
};

