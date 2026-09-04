#include "YMenuScreenEntry.h"

UYMenuScreenEntry::UYMenuScreenEntry() {
    this->m_homeScreenBP = NULL;
    this->m_newLoginBP = NULL;
    this->m_legalAgreementsScreenBP = NULL;
    this->m_serverUnavailableScreenBP = NULL;
    this->m_clientUpdateScreenBP = NULL;
}

void UYMenuScreenEntry::ShowLoginQueueWBP(int32 loginQueuePosition) {
}

void UYMenuScreenEntry::ShowAutoDetectNotification() {
}

void UYMenuScreenEntry::SetShouldShowWelcomeModal(bool shouldShowWelcomeModal) {
}

void UYMenuScreenEntry::OnMaintenanceModeStateResponse(bool State, const FString& Error) {
}

void UYMenuScreenEntry::OnClientUpdateResponse() {
}

void UYMenuScreenEntry::OnAutoLoginResponse(EYLoginResult loginResult) {
}

void UYMenuScreenEntry::OnAutoDetectGraphicsSettingsDeclined() {
}

void UYMenuScreenEntry::OnAutoDetectGraphicsSettingsAccepted() {
}

void UYMenuScreenEntry::AutoDetectGraphicsSettings() {
}


