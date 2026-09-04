#include "YAuthorization.h"

UYAuthorization::UYAuthorization() {
    this->m_authBaseUrlSteam = TEXT("http://127.0.0.1:50001");
    this->m_authBaseUrlEos = TEXT("http://127.0.0.1:60001");
    this->m_playfabInstance = NULL;
}

bool UYAuthorization::TryAutoLogin() {
    return false;
}

void UYAuthorization::OnPlayfabLoginDone(bool success, const FString& loginError, const FString& playfabTitleId) {
}

bool UYAuthorization::Login(const FString& NewLogin, const FString& Password, const FString& authType) {
    return false;
}

bool UYAuthorization::isConnected() const {
    return false;
}

UYAuthorization* UYAuthorization::GetInstance(UObject* objectContext) {
    return NULL;
}

EYAuthorizationUsageType UYAuthorization::GetAuthorizationType() {
    return EYAuthorizationUsageType::Internal;
}


