#include "YBattleEyeControllerComponent.h"

UYBattleEyeControllerComponent::UYBattleEyeControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isReadyInitialize = false;
    this->m_clientReadyInitialize = false;
    this->m_lastEmptyBattleyeQueueTime = 0.0f;
    this->m_lastEmptyNetworkMessageQueueTime = 0.0f;
}

void UYBattleEyeControllerComponent::ServerReceivePackageFromClient_Implementation(const FYBattleEyeReplicatedMessageEntry& Data) {
}

void UYBattleEyeControllerComponent::ServerReadyInitialize_Implementation(bool Initialize) {
}

void UYBattleEyeControllerComponent::ServerAckPackageFromClient_Implementation(FGuid pendingMessage) {
}

void UYBattleEyeControllerComponent::ClientReceivePackageFromServer_Implementation(const FYBattleEyeReplicatedMessageEntry& Data) {
}


