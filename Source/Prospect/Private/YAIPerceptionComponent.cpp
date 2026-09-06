#include "YAIPerceptionComponent.h"

UYAIPerceptionComponent::UYAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYAIPerceptionComponent::SetSenseTuningRowToDefault() {
}

void UYAIPerceptionComponent::SetSenseTuningRowHandle(FDataTableRowHandle senseRowHandle) {
}

void UYAIPerceptionComponent::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYAIPerceptionComponent::OnGPAModifierChangedCallback(EYGameplayAttribute Attribute, bool added, const FGuid& Guid) {
}

void UYAIPerceptionComponent::OnAIStateChanged(EYAIState PreviousState, EYAIState currentState) {
}

void UYAIPerceptionComponent::GetSenseTuningRowBP(FYAISenseTuningRow& senseRow) {
}

FName UYAIPerceptionComponent::GetCurrentSenseTuningRowName() const {
    return NAME_None;
}


