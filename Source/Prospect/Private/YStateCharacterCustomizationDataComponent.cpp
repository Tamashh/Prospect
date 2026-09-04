#include "YStateCharacterCustomizationDataComponent.h"
#include "Net/UnrealNetwork.h"

UYStateCharacterCustomizationDataComponent::UYStateCharacterCustomizationDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_mergedSkeletalMesh = NULL;
}

void UYStateCharacterCustomizationDataComponent::SetActiveCustomizationData(FYActiveCustomizationData newData) {
}

void UYStateCharacterCustomizationDataComponent::OnRep_EquippedCustomizationData(FYActiveCustomizationData oldData) {
}

void UYStateCharacterCustomizationDataComponent::OnCustomizationDataUpdated(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh) {
}

void UYStateCharacterCustomizationDataComponent::OnActiveInstanceDataLoaded(int32 loadHandle) {
}

void UYStateCharacterCustomizationDataComponent::InitializeCustomizationResources() {
}

FYActiveCustomizationData UYStateCharacterCustomizationDataComponent::GetActiveCustomizationData() const {
    return FYActiveCustomizationData{};
}

void UYStateCharacterCustomizationDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYStateCharacterCustomizationDataComponent, m_activeCustomizationData);
}


