#include "YGameStateSessionComponent.h"
#include "Net/UnrealNetwork.h"

UYGameStateSessionComponent::UYGameStateSessionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_startUtcTime = 0ULL;
    this->m_lastTimeUserConnectedUtcTime = 0ULL;
}

void UYGameStateSessionComponent::TryGetBackendTitleData() {
}

void UYGameStateSessionComponent::OnUserConnected(AGameModeBase* GameMode, const FUniqueNetIdRepl& NewPlayer, FString& errorMessage) {
}

void UYGameStateSessionComponent::OnRep_CompletedStates(TArray<EYSessionEventType> oldSessionTypes) {
}

void UYGameStateSessionComponent::OnLoginResult(EYLoginResult Result) {
}

void UYGameStateSessionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYGameStateSessionComponent, m_completedStates);
    DOREPLIFETIME(UYGameStateSessionComponent, m_startUtcTime);
}


