#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_InboxMessageEntry.generated.h"

class UButton;
class UTextBlock;
class UYWidget_InboxMessageEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_InboxMessageEntry : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMessageEntryClicked, UYWidget_InboxMessageEntry*, messageEntry);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_messageSenderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_messageSubjectText;
    
public:
    UYWidget_InboxMessageEntry();

private:
    UFUNCTION(BlueprintCallable)
    void HandleWidgetClicked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleSelectedEntry(bool hasSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMessageUpdated(bool hasRead, bool hasAttachments);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AllGrantsClaimed();
    
};

