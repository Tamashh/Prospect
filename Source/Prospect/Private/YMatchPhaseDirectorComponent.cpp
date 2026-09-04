#include "YMatchPhaseDirectorComponent.h"
#include "Net/UnrealNetwork.h"

UYMatchPhaseDirectorComponent::UYMatchPhaseDirectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYMatchPhaseDirectorComponent::OnRep_CurrentMatchPhaseData() {
}

bool UYMatchPhaseDirectorComponent::IsPlayerSpawningAllowed_Implementation() const {
    return false;
}

float UYMatchPhaseDirectorComponent::GetTimeElapsedInPhase() {
    return 0.0f;
}

FName UYMatchPhaseDirectorComponent::GetCurrentMatchPhaseName() {
    return NAME_None;
}

FYMatchPhaseGameplayRow UYMatchPhaseDirectorComponent::GetCurrentMatchPhaseGameplayData() {
    return FYMatchPhaseGameplayRow{};
}

UYMatchPhaseDirectorComponent* UYMatchPhaseDirectorComponent::FindMatchPhaseDirector(UObject* WorldContext) {
    return NULL;
}

FYMatchPhaseGameplayRow UYMatchPhaseDirectorComponent::FindCurrentMatchPhaseGameplayData(UObject* contextObject) {
    return FYMatchPhaseGameplayRow{};
}


void UYMatchPhaseDirectorComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYMatchPhaseDirectorComponent, m_currentMatchPhaseData);
}


