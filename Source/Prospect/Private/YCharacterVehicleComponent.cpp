#include "YCharacterVehicleComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterVehicleComponent::UYCharacterVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_boostStateReplicated = false;
    this->m_boostStateActiveLocal = false;
    this->m_vehicle = NULL;
}

void UYCharacterVehicleComponent::OnVehicleDeactivated(bool wasInterupted) {
}

void UYCharacterVehicleComponent::OnVehicleActivated() {
}

void UYCharacterVehicleComponent::OnRep_Vehicle() {
}

void UYCharacterVehicleComponent::OnRep_BoostStateChanged() {
}

void UYCharacterVehicleComponent::OnMovementImpact(const FHitResult& Hit, const FVector& moveDelta) {
}

void UYCharacterVehicleComponent::OnMovementDataChanged(FYMovementModeDataChanged newData) {
}

void UYCharacterVehicleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterVehicleComponent, m_boostStateReplicated);
    DOREPLIFETIME(UYCharacterVehicleComponent, m_vehicle);
}


