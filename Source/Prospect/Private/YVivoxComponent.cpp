#include "YVivoxComponent.h"

UYVivoxComponent::UYVivoxComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_reconnectAttemptsCounter = 3;
}

void UYVivoxComponent::SetActiveVoiceChannel(EYChannelType Channel) {
}

void UYVivoxComponent::OnVivoxInitializationChanged(bool State) {
}


