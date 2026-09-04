#include "YMatchChatManagerComponent.h"
#include "Net/UnrealNetwork.h"

UYMatchChatManagerComponent::UYMatchChatManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYMatchChatManagerComponent::OnRep_ServerName() {
}

void UYMatchChatManagerComponent::OnRep_EnvironmentName() {
}

void UYMatchChatManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYMatchChatManagerComponent, m_serverName);
    DOREPLIFETIME(UYMatchChatManagerComponent, m_currentEnvironmentName);
}


