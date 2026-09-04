#include "YAIBotController.h"

AYAIBotController::AYAIBotController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_controlledPlayerCharacter = NULL;
    this->m_controlledPlayerController = NULL;
}

bool AYAIBotController::TakeOver(AYPlayerController_Match* Controller) {
    return false;
}

void AYAIBotController::StopBTLogic(UYHealthComponent* healthComponent, AActor* instigatorActor) {
}

bool AYAIBotController::MoveOnPath() {
    return false;
}

bool AYAIBotController::FindPathToLocation(FVector TargetLocation, float minLastPathfindTime) {
    return false;
}

bool AYAIBotController::AimAt(FVector TargetLocation, FVector2D maxError) {
    return false;
}


