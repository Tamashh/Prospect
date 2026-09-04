#include "YWidget_TalkingIcon.h"

UYWidget_TalkingIcon::UYWidget_TalkingIcon() {
    this->m_isTalking = false;
}

void UYWidget_TalkingIcon::SetupFromData(const FString& PlayerId) {
}

void UYWidget_TalkingIcon::SetTalking(bool NewIsTalking) {
}

void UYWidget_TalkingIcon::SetEmptyState() {
}

void UYWidget_TalkingIcon::OnParticipantUpdated(const FString& PlayerId, const bool NewIsTalking) {
}

bool UYWidget_TalkingIcon::IsTalking() {
    return false;
}



