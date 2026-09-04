#include "YAIController.h"
#include "YAITurnComponent.h"
#include "YPathFollowingComponent.h"

AYAIController::AYAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UYPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->m_shouldNeverUpdateNavigationTransform = true;
    this->m_delayBehaviorSpawning = false;
    this->m_turnComponent = CreateDefaultSubobject<UYAITurnComponent>(TEXT("AITurnComponent"));
    this->m_controlledCharacter = NULL;
    this->m_keyHomeLocation = TEXT("HomeLocation");
    this->m_keyNameCombatTarget = TEXT("combatTarget");
    this->m_keyStabilityAnimationInfo = TEXT("StabilityAnimationInfo");
}

void AYAIController::StopComboWindow() {
}

void AYAIController::StartComboWindow(FGameplayTagContainer possibleComboTags) {
}





