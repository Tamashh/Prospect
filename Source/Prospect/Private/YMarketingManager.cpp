#include "YMarketingManager.h"

UYMarketingManager::UYMarketingManager() {
}

void UYMarketingManager::RegisterForMarketing(const UObject* objectContext, const FString& Email, const FString& Locale) {
}

void UYMarketingManager::OnRegisterForMarketingResponse(const FYAzureFunctionResult& azureResult) {
}

void UYMarketingManager::OnGetRegistrationStatusResponse(const FYAzureFunctionResult& azureResult) {
}

EYRegistrationStatus UYMarketingManager::GetRegistrationStatus(const UObject* objectContext) {
    return EYRegistrationStatus::NotRegistered;
}

UYMarketingManager* UYMarketingManager::GetMarketingManager(const UObject* objectContext) {
    return NULL;
}


