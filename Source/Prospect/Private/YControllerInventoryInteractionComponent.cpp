#include "YControllerInventoryInteractionComponent.h"

UYControllerInventoryInteractionComponent::UYControllerInventoryInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_interactingActorContext = NULL;
    this->m_interactingInventoryComponent = NULL;
}

void UYControllerInventoryInteractionComponent::SetPlayerInventory(const FYPlayerInventory& Inventory) const {
}

void UYControllerInventoryInteractionComponent::OnInventoryStateDeactivatedCallback(bool bWasInterrupted) {
}

bool UYControllerInventoryInteractionComponent::HasValidInventoryInteraction() const {
    return false;
}

FYPlayerInventory UYControllerInventoryInteractionComponent::GetPlayerInventory() const {
    return FYPlayerInventory{};
}

UYStateInventoryComponent* UYControllerInventoryInteractionComponent::GetInteractingStateInventoryComponent() const {
    return NULL;
}

AActor* UYControllerInventoryInteractionComponent::GetInteractingActorContext() const {
    return NULL;
}


