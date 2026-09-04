#include "YControllerCustomizationComponent.h"

UYControllerCustomizationComponent::UYControllerCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_globalVanityModel = NULL;
}

void UYControllerCustomizationComponent::ServerRequestUpdateActiveGlobalVanity_Implementation(const FYActiveGlobalVanity& newVanity) {
}

void UYControllerCustomizationComponent::ServerDebugRequestUpdateActiveGlobalVanity_Implementation(const FYActiveGlobalVanity& newVanity) {
}

void UYControllerCustomizationComponent::RequestWeaponVanityTemporaryVisualization(const FDataTableRowHandle& Handle, bool shouldShow, bool overrideOtherVanity) const {
}

void UYControllerCustomizationComponent::OnGlobalVanityStateDataChanged() {
}

void UYControllerCustomizationComponent::OnGlobalVanityDataUpdated() {
}

void UYControllerCustomizationComponent::InitializeCustomization() {
}

UYControllerCustomizationComponent* UYControllerCustomizationComponent::FindCustomizationComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerCustomizationComponent::DebugUpdateActiveGlobalVanity(const TArray<FString>& newVanity, const FString& droppodId) {
}


