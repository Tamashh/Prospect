#include "YAICharacterMovementComponent.h"

UYAICharacterMovementComponent::UYAICharacterMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSimulationTimeStep = 0.0799999982f;
    this->MaxSimulationIterations = 2;
    this->bAlwaysCheckFloor = false;
    this->m_alignMeshToFloor = true;
    this->m_maxAllowedRotationValue = 20.0f;
    this->m_interpRotationRate = 10.0f;
    this->m_maxTraceToFloorDistance = 1000.0f;
}


