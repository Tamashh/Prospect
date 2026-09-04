#include "YCharacterBagComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterBagComponent::UYCharacterBagComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYCharacterBagComponent::ServerSetActiveBagForStation_Implementation(const FYInventoryItem& bag) {
}
bool UYCharacterBagComponent::ServerSetActiveBagForStation_Validate(const FYInventoryItem& bag) {
    return true;
}

void UYCharacterBagComponent::OnRep_ActiveBagData() {
}

void UYCharacterBagComponent::OnControllerChanged(AController* Controller) {
}

void UYCharacterBagComponent::HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYCharacterBagComponent::HandleOnMeshViewStateChanged(EYMeshViewState newViewState) {
}

void UYCharacterBagComponent::HandleOnMeshLoaded() {
}

void UYCharacterBagComponent::HandleOnLootCreated(const FYPickupItem& pickupItem, AYPickupActor* pickUpActor) {
}

void UYCharacterBagComponent::HandleOnDropItem(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType) {
}

void UYCharacterBagComponent::HandleOnDeath(UYHealthComponent* healthComponent, AActor* Instigator) {
}

void UYCharacterBagComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterBagComponent, m_activeBagData);
}


