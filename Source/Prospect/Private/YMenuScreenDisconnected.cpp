#include "YMenuScreenDisconnected.h"

UYMenuScreenDisconnected::UYMenuScreenDisconnected() {
    this->m_entryScreenBP = NULL;
    this->m_homeScreenBP = NULL;
    this->m_legalAgreementsScreenBP = NULL;
    this->m_clientUpdateScreenBP = NULL;
}

void UYMenuScreenDisconnected::OnClientUpdate() {
}

bool UYMenuScreenDisconnected::IsRecoverableError(EYLoginResult Result) const {
    return false;
}

void UYMenuScreenDisconnected::HandleLoginResponse(EYLoginResult Result) {
}


