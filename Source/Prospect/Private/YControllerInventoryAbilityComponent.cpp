#include "YControllerInventoryAbilityComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerInventoryAbilityComponent::UYControllerInventoryAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_activeAbilityComponent = NULL;
}

void UYControllerInventoryAbilityComponent::OnRep_OnAbilityComponents() {
}

void UYControllerInventoryAbilityComponent::OnAbilityConsumedByUse(UYCharacterAbilityComponent* activatedComponent) {
}

UYCharacterAbilityComponent* UYControllerInventoryAbilityComponent::CreateNewAbilityComponent(const FYInventoryItem& inventoryItem) {
    return NULL;
}

void UYControllerInventoryAbilityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerInventoryAbilityComponent, m_runtimeAbilityComponents);
}


