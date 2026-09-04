#include "YControllerAssociationComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerAssociationComponent::UYControllerAssociationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FGuid UYControllerAssociationComponent::StartAssociationHighlightWithData(AActor* actorContext, const FYHighlightAssociationEntry& entry) {
    return FGuid{};
}

void UYControllerAssociationComponent::ServerRemoveHighlightGuid_Implementation(FGuid Guid) {
}

void UYControllerAssociationComponent::ServerHighlightData_Implementation(FYHighlightAssociationEntry Data) {
}

bool UYControllerAssociationComponent::RemoveHighlightGuid(AActor* actorContext, FGuid Guid) {
    return false;
}

void UYControllerAssociationComponent::OnRep_HighlightComponentActive(TArray<FYHighlightAssociationEntry> oldEntries) {
}

void UYControllerAssociationComponent::OnInventoryUpdated(UYStateInventoryComponent* inventoryComponent) {
}

UYControllerAssociationComponent* UYControllerAssociationComponent::FindControllerAssociationComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerAssociationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerAssociationComponent, m_associations);
}


