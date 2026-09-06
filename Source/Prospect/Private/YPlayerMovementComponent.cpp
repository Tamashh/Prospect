#include "YPlayerMovementComponent.h"

UYPlayerMovementComponent::UYPlayerMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSimulationTimeStep = 0.100000001f;
    this->MaxSimulationIterations = 2;
    this->bAlwaysCheckFloor = false;
    this->bWantsToProne = false;
    this->PronedHalfHeight = 45.0f;
    this->MaxWalkSpeedProne = 75.0f;
    this->m_isJumping = false;
    this->m_disregardStateChanges = false;
    this->JumpZVelocityInAirJump = 500.0f;
    this->JumpXYMaxInAirJump = 100.0f;
    this->JumpToADSDelay = 0.200000003f;
    this->m_fastMovementDebug = false;
    this->m_ledgeClimbingComponent = NULL;
    this->m_leaningComponent = NULL;
    this->m_ownerStateComponent = NULL;
    this->m_ownerGameplayAttributeComponent = NULL;
    this->m_encumbranceEffectDataAsset = NULL;
}

void UYPlayerMovementComponent::ResetCheatTeleportDetection() {
}

void UYPlayerMovementComponent::OnVehicleDataChanged(FDataTableRowHandle newRowHandle) {
}

void UYPlayerMovementComponent::OnVehicleChanged(AYVehicle* newVehicle) {
}

void UYPlayerMovementComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYPlayerMovementComponent::OnProneStateFinished(bool bWasInterrupted) {
}

void UYPlayerMovementComponent::OnProneStateChanged() {
}

void UYPlayerMovementComponent::OnIntroFinishedCallback() {
}

void UYPlayerMovementComponent::OnCrouchStateFinished(bool wasInterupted) {
}

void UYPlayerMovementComponent::OnCrouchStateChanged() {
}

void UYPlayerMovementComponent::OnBoostStateChanged(bool newState) {
}

void UYPlayerMovementComponent::OnAnyStatesDeactivated(const TArray<EYPlayerStateBlueprint>& states) {
}

void UYPlayerMovementComponent::OnAnyStateChanged(EYStateChangeType stateChange) {
}

void UYPlayerMovementComponent::OnAnyStateActivated(EYPlayerStateBlueprint State) {
}

bool UYPlayerMovementComponent::IsSprinting() const {
    return false;
}


