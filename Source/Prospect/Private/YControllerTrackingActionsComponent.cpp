#include "YControllerTrackingActionsComponent.h"

UYControllerTrackingActionsComponent::UYControllerTrackingActionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerTrackingActionsComponent::OnPlayerFinishedMatch(EYPlayerMatchFinishedResult newState) {
}

UYControllerTrackingActionsComponent* UYControllerTrackingActionsComponent::FindTrackingActionsComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerTrackingActionsComponent* UYControllerTrackingActionsComponent::FindTrackingActionsComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerTrackingActionsComponent::CheckIfKillRegistered(const FYDealtDamageData& damageDealt) {
}


