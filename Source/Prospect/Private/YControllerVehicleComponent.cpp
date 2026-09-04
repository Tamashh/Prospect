#include "YControllerVehicleComponent.h"

UYControllerVehicleComponent::UYControllerVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_characterStateComponent = NULL;
    this->m_vehicleCharacterComponent = NULL;
}

void UYControllerVehicleComponent::StartVehiclePossesion(AYVehicle* relevantVehicleActor) {
}

bool UYControllerVehicleComponent::SetVehicleBoostState(bool newState, bool disregardCooldown) {
    return false;
}

void UYControllerVehicleComponent::ServerSetVehicleBoostState_Implementation(bool newState) {
}
bool UYControllerVehicleComponent::ServerSetVehicleBoostState_Validate(bool newState) {
    return true;
}

void UYControllerVehicleComponent::OnVehicleStateLeavingDeActivated(bool wasInterupted) {
}

void UYControllerVehicleComponent::OnVehicleStateLeavingActivated() {
}

void UYControllerVehicleComponent::OnVehicleStateActivated() {
}

void UYControllerVehicleComponent::OnTimerVehicleLeavingStateFinished() {
}

void UYControllerVehicleComponent::OnInputStateChanged(int32 stateChangeType, bool Active) {
}

void UYControllerVehicleComponent::OnDeactivateBoost() {
}

void UYControllerVehicleComponent::OnBoostCooldownFinished() {
}


