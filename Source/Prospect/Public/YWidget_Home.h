#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Home.generated.h"

class UCanvasPanel;
class UYWidget_Inbox;
class UYWidget_InboxTopMenu;
class UYWidget_OutpostSquadNotificationOverview;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class PROSPECT_API UYWidget_Home : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_subScreenPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OutpostSquadNotificationOverview* m_outpostSquadNotificationOverview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Inbox* m_inboxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_InboxTopMenu* m_inboxTopMenu;
    
public:
    UYWidget_Home();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleMenuButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleInboxButtonClicked();
    
};

