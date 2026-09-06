#include "YPlayerInteractionComponent.h"

UYPlayerInteractionComponent::UYPlayerInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_debugInfiniteInteractionPlayer = NULL;
    this->m_cachedOwnerStateComponent = NULL;
}

void UYPlayerInteractionComponent::StartInteraction() {
}

void UYPlayerInteractionComponent::ServerStartInteractionInternal_Implementation(UYObjectInteractionComponent* interactionComponent, FName inputAction) {
}
bool UYPlayerInteractionComponent::ServerStartInteractionInternal_Validate(UYObjectInteractionComponent* interactionComponent, FName inputAction) {
    return true;
}

void UYPlayerInteractionComponent::ServerInteractionInterruptedInternal_Implementation() {
}
bool UYPlayerInteractionComponent::ServerInteractionInterruptedInternal_Validate() {
    return true;
}

void UYPlayerInteractionComponent::OnToggleQuickMenuVisibility(bool isQuickMenuVisible) {
}

void UYPlayerInteractionComponent::OnToggleHudVisibility(bool isStationHudVisible) {
}

void UYPlayerInteractionComponent::OnPlayerDBNOStateChanged(AActor* affectedActor) {
}

void UYPlayerInteractionComponent::OnOwnerGotDamaged(const FYDealtDamageData& Data) {
}

void UYPlayerInteractionComponent::OnObjectInteractionMessageUpdated() {
}

void UYPlayerInteractionComponent::OnInteractionStateDeactivated(bool interrupted) {
}

void UYPlayerInteractionComponent::OnInteractionStateActivated() {
}

void UYPlayerInteractionComponent::OnInteractionComponentDisabled(UYObjectInteractionComponent* interactionComponent) {
}

void UYPlayerInteractionComponent::OnCharacterDeath(AYCharacter* Character) {
}

void UYPlayerInteractionComponent::InterruptInteraction(const FString& Context, bool interruptFromInput) {
}

bool UYPlayerInteractionComponent::HasInteractionIsValid() const {
    return false;
}

bool UYPlayerInteractionComponent::HasInteractionInProgress() const {
    return false;
}

bool UYPlayerInteractionComponent::HasInteractionActorLocked() const {
    return false;
}

FYInventoryItem UYPlayerInteractionComponent::GetLastPickedUpInventoryItem() const {
    return FYInventoryItem{};
}

float UYPlayerInteractionComponent::GetInteractionDuration() const {
    return 0.0f;
}

void UYPlayerInteractionComponent::ClientInvalidateInteraction_Implementation(const FString& callerContext) {
}

void UYPlayerInteractionComponent::ClientInteractionSuccessful_Implementation() {
}


