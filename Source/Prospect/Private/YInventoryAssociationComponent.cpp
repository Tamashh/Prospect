#include "YInventoryAssociationComponent.h"
#include "Net/UnrealNetwork.h"

UYInventoryAssociationComponent::UYInventoryAssociationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYInventoryAssociationComponent::SetInventoryItem(FYInventoryItem Item) {
}

void UYInventoryAssociationComponent::OnRep_InventoryItem(FYInventoryItem oldRowHandle) {
}

FYInventoryItem UYInventoryAssociationComponent::GetInventoryItem() const {
    return FYInventoryItem{};
}

void UYInventoryAssociationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYInventoryAssociationComponent, m_itemHandle);
}


