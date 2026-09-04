#include "YControllerCharacterCustomizationPersistentComponent.h"

UYControllerCharacterCustomizationPersistentComponent::UYControllerCharacterCustomizationPersistentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerCharacterCustomizationPersistentComponent::TravelToStation() {
}

void UYControllerCharacterCustomizationPersistentComponent::ServerRequestSetPersistentCharacterData_Implementation(const FYCharacterVanity& newData) {
}

void UYControllerCharacterCustomizationPersistentComponent::RequestSetArchetypeIdForFirstCharacterSelection(FDataTableRowHandle archetypeRowHandle) {
}

void UYControllerCharacterCustomizationPersistentComponent::RequestConfirmCharacterCustomization() {
}

void UYControllerCharacterCustomizationPersistentComponent::OnStateCustomizationDataChanged(FYActiveCustomizationData oldData, FYActiveCustomizationData newData, bool ForceRefresh) {
}

void UYControllerCharacterCustomizationPersistentComponent::OnModelCharacterVanityDataChanged() {
}

void UYControllerCharacterCustomizationPersistentComponent::OnCustomizationModelDataChanged(EYCustomizationModelType Type) {
}

void UYControllerCharacterCustomizationPersistentComponent::InitializeCustomization() {
}

UYControllerCharacterCustomizationPersistentComponent* UYControllerCharacterCustomizationPersistentComponent::FindControllerCharacterCustomizationPersistentComponent(const UObject* objCtx) {
    return NULL;
}

void UYControllerCharacterCustomizationPersistentComponent::DebugServerRequestCustomizationItemEquipped_Implementation(const FYUpdateBodyPartRequestData& Data) {
}

void UYControllerCharacterCustomizationPersistentComponent::DebugRequestCustomizationItemEquipped(const FYUpdateBodyPartRequestData& Data) {
}

void UYControllerCharacterCustomizationPersistentComponent::ClientOnModelCharacterVanityDataChanged_Implementation(const TArray<FYCharacterVanity>& characterVanityData) {
}

bool UYControllerCharacterCustomizationPersistentComponent::CalculateActiveCustomizationData(FYActiveCustomizationData& outData, EYCustomizationModelType modelType) const {
    return false;
}


