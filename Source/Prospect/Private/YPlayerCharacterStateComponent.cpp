#include "YPlayerCharacterStateComponent.h"
#include "Net/UnrealNetwork.h"

UYPlayerCharacterStateComponent::UYPlayerCharacterStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bypassEncumbrance = false;
    this->m_encumbranceEffectDataAsset = NULL;
}

bool UYPlayerCharacterStateComponent::ShouldBypassEncumbrance() const {
    return false;
}

void UYPlayerCharacterStateComponent::ServerClearStates_Implementation(const TArray<FYStateChangedData>& States, bool wasInterupted) {
}
bool UYPlayerCharacterStateComponent::ServerClearStates_Validate(const TArray<FYStateChangedData>& States, bool wasInterupted) {
    return true;
}

void UYPlayerCharacterStateComponent::ServerClearState_Implementation(FYStateChangedData State, bool wasInterupted) {
}
bool UYPlayerCharacterStateComponent::ServerClearState_Validate(FYStateChangedData State, bool wasInterupted) {
    return true;
}

void UYPlayerCharacterStateComponent::ServerActivateNewState_Implementation(FYStateChangedData State) {
}
bool UYPlayerCharacterStateComponent::ServerActivateNewState_Validate(FYStateChangedData State) {
    return true;
}

void UYPlayerCharacterStateComponent::OnRep_AuthorithyPlayerState(FYAuthorithyPlayerState oldState) {
}

bool UYPlayerCharacterStateComponent::IsStateActiveBlueprint(EYPlayerStateBlueprint State) {
    return false;
}

int64 UYPlayerCharacterStateComponent::GetActiveStates() {
    return 0;
}

UYPlayerCharacterStateComponent* UYPlayerCharacterStateComponent::FindCharacterStateComponent(AActor* actorContext) {
    return NULL;
}

void UYPlayerCharacterStateComponent::DeActivateStateDelegateBlueprint(EYPlayerStateBlueprint State, FYDeActivateStateBlueprint deactivateBinding) {
}

void UYPlayerCharacterStateComponent::DeactivateStateBlueprint(EYPlayerStateBlueprint State, bool replicateIfAutonomous, bool wasInterrupted, int64 eventCounter, bool fromReplication) {
}

void UYPlayerCharacterStateComponent::DeactivateAllStates() {
}

void UYPlayerCharacterStateComponent::ActivateStateDelegateBlueprint(EYPlayerStateBlueprint State, FYActivateStateBlueprint activateBinding) {
}

void UYPlayerCharacterStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerCharacterStateComponent, m_playerStateAuthorithy);
}


