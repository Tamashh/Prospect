#pragma once
#include "CoreMinimal.h"
#include "YInboxMessage.h"
#include "YWidget.h"
#include "YWidget_Inbox.generated.h"

class UButton;
class URichTextBlock;
class UTextBlock;
class UYWidget_ImageBase;
class UYWidget_InboxMessageEntry;
class UYWidget_MessageGrantEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Inbox : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BITimeWhenInboxShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BITimeWhenMessageShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_messageSenderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_messageSubjectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_messageContentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_messageBannerImage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FString, UYWidget_InboxMessageEntry*> m_cachedMessages;
    
public:
    UYWidget_Inbox();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedMessageEntry(UYWidget_InboxMessageEntry* selectedMessageEntry);
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenInbox(bool isForceOpened);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMessagesUpdated(const TArray<FYInboxMessage>& inboxMessages);
    
    UFUNCTION(BlueprintCallable)
    void HandleMessageRemoved(const FString& ID);
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseInbox();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetPreviewedMessageAttachments();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemoveMessageEntry(UYWidget_InboxMessageEntry* entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RemoveAllMessageEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreviewMessageUpdated(bool hasRead, bool hasAttachments);
    
public:
    UFUNCTION(BlueprintCallable)
    bool BP_HandleBackKey_Implementation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_InboxMessageEntry* BP_CreateMessageEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_MessageGrantEntry* BP_CreateAndAddMessageGrantEntry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AllGrantsClaimed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AddMessageEntries(const TMap<FString, UYWidget_InboxMessageEntry*>& entries);
    
};

