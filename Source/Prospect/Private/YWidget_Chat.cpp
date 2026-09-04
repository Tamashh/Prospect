#include "YWidget_Chat.h"

UYWidget_Chat::UYWidget_Chat() {
    this->m_hideChatWhenInactive = false;
    this->m_minDurationToKeepChatVisibleAfterMessageShown = 5.0f;
    this->m_timeStampLastAcitivity = -10000.0f;
    this->m_chatIngameWidth = 240.0f;
    this->m_isInMatch = false;
    this->m_channelTypeTextBlock = NULL;
    this->m_chatNotActiveText = NULL;
    this->m_chatInputDisabled = NULL;
    this->m_channelTypeContainer = NULL;
    this->m_inputEditableTextBox = NULL;
    this->m_chatMessagesCanvasPanel = NULL;
    this->m_chatMessagesVerticalBox = NULL;
    this->m_chatMessagesScrollBox = NULL;
    this->m_chatSizeBox = NULL;
    this->m_chatTextSizeBox = NULL;
    this->m_chatUserMenu = NULL;
    this->m_chatMessageWBPClass = NULL;
    this->m_editableTextBoxMaxCharacterCount = 64;
    this->m_playerMutelistObj = NULL;
}

void UYWidget_Chat::ResizeChat(const FVector2D& newDimensions) {
}

void UYWidget_Chat::RemoveChatChannel(const EYChannelType& ChannelType, EYChannelContext Context) {
}

void UYWidget_Chat::RefreshChatVisibility() {
}

void UYWidget_Chat::RefreshChatBlockingText() {
}

void UYWidget_Chat::OnUpDownArrayPressed(bool clickedUpKey) {
}

void UYWidget_Chat::OnTryAutoReconnect(const int32 numAttemptsLeft) {
}

void UYWidget_Chat::OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UYWidget_Chat::OnTabPressed() {
}

void UYWidget_Chat::OnShiftTabPressed() {
}

void UYWidget_Chat::OnSettingsApplied() {
}

void UYWidget_Chat::OnMuteStateChanged(const FYMutingState& stateChanged) {
}

void UYWidget_Chat::OnMultiplayerMatchStateChanged(bool newState) {
}

void UYWidget_Chat::OnMessageReceived(const FYMessage& receivedMessage) {
}

void UYWidget_Chat::OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles) {
}

void UYWidget_Chat::OnChatInputPressed() {
}

void UYWidget_Chat::OnChannelTypeChanged(EYChannelType newChannelType) {
}

void UYWidget_Chat::HandleOnTextChanged(const FText& Text) {
}

UYWidget_ChatMessage* UYWidget_Chat::CreateChatMessage(const FYMessage& receivedMessage) {
    return NULL;
}



void UYWidget_Chat::BindChatDelegates() {
}

void UYWidget_Chat::AddChatChannel(const EYChannelType& ChannelType, EYChannelContext Context) {
}


