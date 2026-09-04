#include "YAITurretController.h"
#include "Perception/AISenseConfig_Sight.h"

AYAITurretController::AYAITurretController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_canTargetHumanPlayers = true;
    this->m_canTargetOtherTurrets = true;
    this->m_aimAtCharacterSocketName = TEXT("Hip");
    this->m_controlledTurret = NULL;
    this->m_behaviorTree = NULL;
    this->m_sightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));
}

void AYAITurretController::SetAimTargetLocation(const FVector& aimTargetLocation) {
}

void AYAITurretController::SetAimTarget(AActor* AimTarget) {
}

void AYAITurretController::OnTurretStateChanged(EYTurretState newState) {
}

void AYAITurretController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors) {
}

bool AYAITurretController::HasValidTargetLocation() const {
    return false;
}

TArray<AActor*> AYAITurretController::GetSeenEnemies() const {
    return TArray<AActor*>();
}

FVector AYAITurretController::GetAimTargetLocation() const {
    return FVector{};
}

AActor* AYAITurretController::GetAimTarget() const {
    return NULL;
}

FRotator AYAITurretController::GetAimRotation() const {
    return FRotator{};
}

void AYAITurretController::ClearAimTarget() {
}


