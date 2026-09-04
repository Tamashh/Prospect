#include "YGamePingManager.h"

UYGamePingManager::UYGamePingManager() {
    this->m_timeoutPingType = 5.0f;
    this->m_maxAmountOfPingRetries = 3;
}

void UYGamePingManager::OnTimeoutPingType(EYServicePingTypes Type) {
}

void UYGamePingManager::OnStationPingReceived() {
}

void UYGamePingManager::OnPingRegionSuccess(UPingIP* PingOperation, const FString& Hostname, int32 TimeMS) {
}

void UYGamePingManager::OnPingRegionFailure(UPingIP* PingOperation, const FString& Hostname) {
}


