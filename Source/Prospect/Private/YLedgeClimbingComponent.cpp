#include "YLedgeClimbingComponent.h"

UYLedgeClimbingComponent::UYLedgeClimbingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerMovementComponent = NULL;
    this->m_playerCharacterStateComponent = NULL;
    this->m_fallingDamageComponent = NULL;
    this->m_ownerCharacter = NULL;
    this->m_characterCapsuleComponent = NULL;
}

void UYLedgeClimbingComponent::OnLedgeClimbingDataReplicatedCallback(const FYReplicatedLedgeClimbingData& oldData, const FYReplicatedLedgeClimbingData& newData) {
}

void UYLedgeClimbingComponent::OnInternalClimbingStateChangedCallback(EYClimbingStateInternal prevClimbingState, EYClimbingStateInternal newClimbingState) {
}

void UYLedgeClimbingComponent::OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles) {
}

void UYLedgeClimbingComponent::OnClimbingStateDeactivatedCallback(bool wasInterrupted) {
}

bool UYLedgeClimbingComponent::IsUsingSoftViewLock() const {
    return false;
}

bool UYLedgeClimbingComponent::IsOnCooldown() const {
    return false;
}

bool UYLedgeClimbingComponent::IsClimbing() const {
    return false;
}

EYObstacleType UYLedgeClimbingComponent::GetObstacleType() const {
    return EYObstacleType::None;
}

EYMoveType UYLedgeClimbingComponent::GetMoveType() const {
    return EYMoveType::None;
}

float UYLedgeClimbingComponent::GetMinYawAngle() const {
    return 0.0f;
}

float UYLedgeClimbingComponent::GetMaxYawAngle() const {
    return 0.0f;
}

float UYLedgeClimbingComponent::GetLerpMaxTime() const {
    return 0.0f;
}

EYClimbingStateInternal UYLedgeClimbingComponent::GetInternalClimbingState() const {
    return EYClimbingStateInternal::None;
}

float UYLedgeClimbingComponent::GetClimbingSpeed() const {
    return 0.0f;
}

FVector UYLedgeClimbingComponent::GetClimbingNormal() const {
    return FVector{};
}

void UYLedgeClimbingComponent::CooldownCallback() {
}

bool UYLedgeClimbingComponent::CanLedgeClimb() const {
    return false;
}


