#include "YAuthorizationManager.h"

UYAuthorizationManager::UYAuthorizationManager() {
    this->m_currentAuthorizationState = EYAuthorizationState::Init;
    this->m_playfabInstance = NULL;
}

void UYAuthorizationManager::OnSeasonWipeCheckResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnRequestRollbackCheckResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnRequestMaintenanceModeStateResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnRequestLoginQueueStateResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnPlayFabLoginComplete(bool isSuccess, const FString& loginError, const FString& playfabTitleId) {
}

void UYAuthorizationManager::OnNewLegalAgreementsUpdateResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnClientUpdateResponse(const FYAzureFunctionResult& azureResult) {
}

void UYAuthorizationManager::OnCheckIfCanGoToStationFromQueue(const FYAzureFunctionResult& azureResult) {
}

bool UYAuthorizationManager::IsCompletelyAuthorized(const UObject* objectContext) {
    return false;
}

int32 UYAuthorizationManager::GetCurrentLoginQueuePosition(const UObject* objectContext) {
    return 0;
}

EYAuthorizationState UYAuthorizationManager::GetCurrentAuthorizationState(const UObject* objectContext) {
    return EYAuthorizationState::Init;
}

UYAuthorizationManager* UYAuthorizationManager::GetAuthorizationManager(const UObject* objectContext) {
    return NULL;
}

void UYAuthorizationManager::ContinueLogin(const UObject* objectContext) {
}


