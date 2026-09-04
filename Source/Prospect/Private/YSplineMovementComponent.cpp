#include "YSplineMovementComponent.h"
#include "Net/UnrealNetwork.h"

UYSplineMovementComponent::UYSplineMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_replicateMovementFrequency = 1.0f;
    this->m_minMovementSpeed = 1.0f;
    this->m_maxMovementDescrepency = 1000.0f;
    this->m_movementSpeedCatchupMultiplier = 0.5f;
    this->m_moveAheadMultiplier = 0.150000006f;
    this->m_splineComponent = NULL;
    this->m_serverMovementSpeed = 0.0f;
}

void UYSplineMovementComponent::SetSplineComponent(USplineComponent* SplineComponent) {
}

void UYSplineMovementComponent::SetPredictedMovementSpeed(float newSpeed) {
}

void UYSplineMovementComponent::SetMovementSpeed(float newSpeed) {
}

void UYSplineMovementComponent::SetEndLocations(TArray<float> newEndLocations) {
}

void UYSplineMovementComponent::ReplicateMovement() {
}

void UYSplineMovementComponent::OnRep_SplineComponent() {
}

void UYSplineMovementComponent::OnRep_MovementData() {
}

void UYSplineMovementComponent::OnRep_MovementActors() {
}

float UYSplineMovementComponent::GetPredictedMovementSpeed() const {
    return 0.0f;
}

float UYSplineMovementComponent::GetMovementSpeed() const {
    return 0.0f;
}

TArray<float> UYSplineMovementComponent::GetCurrentLocations() {
    return TArray<float>();
}

void UYSplineMovementComponent::AddMovementActor(const FYReplicatedMovementActor& newMovementActors) {
}

void UYSplineMovementComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYSplineMovementComponent, m_movementActors);
    DOREPLIFETIME(UYSplineMovementComponent, m_movementData);
    DOREPLIFETIME(UYSplineMovementComponent, m_splineComponent);
    DOREPLIFETIME(UYSplineMovementComponent, m_serverMovementSpeed);
}


