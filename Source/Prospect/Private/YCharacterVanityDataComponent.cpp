#include "YCharacterVanityDataComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterVanityDataComponent::UYCharacterVanityDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shouldAsyncloadData = false;
    this->m_finishedAsyncloading = false;
}

void UYCharacterVanityDataComponent::SetGlobalVanityRuntimeData(const FYActiveGlobalRuntimeVanityData& newData) {
}

void UYCharacterVanityDataComponent::OnUpdatedGlobalVanityData(const FYActiveGlobalRuntimeVanityData& oldVanityData) {
}

void UYCharacterVanityDataComponent::OnRep_SocialProfileRow() {
}

void UYCharacterVanityDataComponent::OnRep_ActiveData(FYActiveGlobalRuntimeVanityData oldData) {
}

void UYCharacterVanityDataComponent::OnPlayerProfileUpdated(const FYPlayerProfile& PlayerProfile) {
}

void UYCharacterVanityDataComponent::OnFinishedAsyncLoading(int32 loadHandle) {
}

bool UYCharacterVanityDataComponent::FindVanityDataItem(AActor* actorContext, EYVanityType vanityType, FYGlobalVanityItem& outData, int32 itemSlotID) {
    return false;
}

void UYCharacterVanityDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterVanityDataComponent, m_activeData);
    DOREPLIFETIME(UYCharacterVanityDataComponent, m_socialRow);
}


