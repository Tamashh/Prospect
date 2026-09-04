#include "YPlayerCarryingComponent.h"

UYPlayerCarryingComponent::UYPlayerCarryingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlayerCarryingComponent::TryDeactivateCarryingState() {
}

bool UYPlayerCarryingComponent::TryActivateCarryingState() {
    return false;
}

void UYPlayerCarryingComponent::OnPutCharacterIntoReconnectState(AYPlayerCharacter* playerCharacter) {
}





