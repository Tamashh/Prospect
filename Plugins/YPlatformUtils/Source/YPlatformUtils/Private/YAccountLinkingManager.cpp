#include "YAccountLinkingManager.h"

UYAccountLinkingManager::UYAccountLinkingManager() {
}

void UYAccountLinkingManager::StartAccountLinking(const FName& selectedPlatform) {
}

bool UYAccountLinkingManager::IsLinkingInProcess() {
    return false;
}

float UYAccountLinkingManager::GetTimeoutThreshold() {
    return 0.0f;
}

UYAccountLinkingManager* UYAccountLinkingManager::GetAccountLinkingManager(const UObject* objectContext) {
    return NULL;
}


