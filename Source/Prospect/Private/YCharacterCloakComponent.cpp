#include "YCharacterCloakComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterCloakComponent::UYCharacterCloakComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cloakMaterialMID = NULL;
}

void UYCharacterCloakComponent::OnRep_IsCloaked(FYCloakRuntimeData oldData) {
}

void UYCharacterCloakComponent::OnChangedActiveWeapon() {
}

void UYCharacterCloakComponent::OnBagMeshChangedCallback() {
}

bool UYCharacterCloakComponent::IsCloaked() {
    return false;
}

void UYCharacterCloakComponent::DeactivateCloak() {
}

void UYCharacterCloakComponent::ActivateCloak(FDataTableRowHandle desiredData) {
}

void UYCharacterCloakComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterCloakComponent, m_runtimeData);
}


