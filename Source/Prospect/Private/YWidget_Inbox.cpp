#include "YWidget_Inbox.h"

UYWidget_Inbox::UYWidget_Inbox() {
    this->m_closeButton = NULL;
    this->m_BITimeWhenInboxShown = 0;
    this->m_BITimeWhenMessageShown = 0;
    this->m_messageSenderText = NULL;
    this->m_messageSubjectText = NULL;
    this->m_messageContentText = NULL;
    this->m_messageBannerImage = NULL;
}

void UYWidget_Inbox::UpdateSelectedMessageEntry(UYWidget_InboxMessageEntry* selectedMessageEntry) {
}

void UYWidget_Inbox::OpenInbox(bool isForceOpened) {
}

void UYWidget_Inbox::HandleMessagesUpdated(const TArray<FYInboxMessage>& inboxMessages) {
}

void UYWidget_Inbox::HandleMessageRemoved(const FString& ID) {
}

void UYWidget_Inbox::CloseInbox() {
}





bool UYWidget_Inbox::BP_HandleBackKey_Implementation() {
    return false;
}






