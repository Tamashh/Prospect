#include "YPlayerGameDataComponent.h"
#include "Net/UnrealNetwork.h"

UYPlayerGameDataComponent::UYPlayerGameDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_scoreData.AddDefaulted(1);
}

void UYPlayerGameDataComponent::OnRep_RuntimeScoreDataChanged(TArray<FYPlayerRuntimeScoreStateData> oldData) {
}

void UYPlayerGameDataComponent::OnPlayerStateDataChanged(TArray<FYPlayerRuntimeScoreStateData>& oldData) {
}

bool UYPlayerGameDataComponent::IsStateActive(EYPlayerGameDataStateType State, AActor* relevantActorContext) {
    return false;
}

bool UYPlayerGameDataComponent::FindScoreStateData(EYPlayerGameDataStateType State, AActor* relevantActorContext, FYPlayerRuntimeScoreStateData& outData) {
    return false;
}

void UYPlayerGameDataComponent::ClearScoreData(EYPlayerGameDataStateType Type) {
}

void UYPlayerGameDataComponent::AddScoreData(EYPlayerGameDataStateType Type, int32 newScore) {
}

void UYPlayerGameDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerGameDataComponent, m_scoreData);
}


