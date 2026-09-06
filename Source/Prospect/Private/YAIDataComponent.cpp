#include "YAIDataComponent.h"
#include "Net/UnrealNetwork.h"

UYAIDataComponent::UYAIDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_squad = NULL;
    this->m_combatTargetReplicated = NULL;
    this->m_aiState = EYAIState::None;
    this->m_isAngry = false;
    this->m_notifyPlayerOnCombatStarted = false;
}

void UYAIDataComponent::SetReplicatedCombatTarget(AActor* Actor) {
}

void UYAIDataComponent::SetIsAngry(bool isAngry) {
}

void UYAIDataComponent::SetAIState(EYAIState aiState) {
}

void UYAIDataComponent::OnRep_AIState(EYAIState PreviousState) {
}

void UYAIDataComponent::OnAIDied(UYHealthComponent* healthComponent, AActor* Instigator) {
}

bool UYAIDataComponent::GetIsAngry() {
    return false;
}

FString UYAIDataComponent::GetDebugInfo() {
    return TEXT("");
}

AActor* UYAIDataComponent::GetCombatTarget() {
    return NULL;
}

EYAIState UYAIDataComponent::GetAIState() {
    return EYAIState::None;
}

void UYAIDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYAIDataComponent, m_combatTargetReplicated);
    DOREPLIFETIME(UYAIDataComponent, m_aiState);
    DOREPLIFETIME(UYAIDataComponent, m_isAngry);
}


