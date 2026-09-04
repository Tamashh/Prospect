#include "YWidget_OutpostSquadNotification.h"

UYWidget_OutpostSquadNotification::UYWidget_OutpostSquadNotification() {
    this->m_messageText = NULL;
    this->m_closeButton = NULL;
    this->m_acceptSquadInviteButton = NULL;
    this->m_declineSquadInviteButton = NULL;
}

void UYWidget_OutpostSquadNotification::OnHandleDeclineSquadInviteClicked() {
}

void UYWidget_OutpostSquadNotification::OnHandleCloseClicked() {
}

void UYWidget_OutpostSquadNotification::OnHandleAcceptSquadInviteClicked() {
}

void UYWidget_OutpostSquadNotification::CreateNotification(int32 notificationId, const FYSquadInvite& squadInvite, const FText& Message, bool isSquadInvite) {
}

void UYWidget_OutpostSquadNotification::CloseNotification() {
}

bool UYWidget_OutpostSquadNotification::BP_HandleBackKey_Implementation() {
    return false;
}


