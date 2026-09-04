#include "YCharacterCosmeticVisualizationComponent.h"

UYCharacterCosmeticVisualizationComponent::UYCharacterCosmeticVisualizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cosmeticSecondaryWeaponMesh = NULL;
    this->m_cosmeticMeleeMesh = NULL;
}

void UYCharacterCosmeticVisualizationComponent::RefreshCosmeticVisualization() {
}

void UYCharacterCosmeticVisualizationComponent::OnGearSetItemsAvaiable(const TArray<FYInventoryItem>& gearSetItems) {
}

void UYCharacterCosmeticVisualizationComponent::OnFinishedLoadingMeleeMesh(int32 loadHandle) const {
}

void UYCharacterCosmeticVisualizationComponent::OnFinishedAsyncloadingCosmeticMesh(int32 Handle) const {
}

void UYCharacterCosmeticVisualizationComponent::OnCosmeticStateChanged(const FYPlayerCosmeticReplicatedData& oldData, const FYPlayerCosmeticReplicatedData& newData) {
}

bool UYCharacterCosmeticVisualizationComponent::IsCharacterComseticStateActive(AActor* relevantContext) {
    return false;
}


