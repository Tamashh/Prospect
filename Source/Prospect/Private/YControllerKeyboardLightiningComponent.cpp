#include "YControllerKeyboardLightiningComponent.h"

UYControllerKeyboardLightiningComponent::UYControllerKeyboardLightiningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerKeyboardLightiningComponent::OnPossedPawnDeathStateActivated() {
}

void UYControllerKeyboardLightiningComponent::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYControllerKeyboardLightiningComponent::OnInputStackChanged(TArray<UInputComponent*> inputComponents) {
}

int32 UYControllerKeyboardLightiningComponent::ForceSpecificColorOnKeyboard(AActor* relevantActor, FYKeyOverrideColorData Data, bool clearPreviousExplicitColors) {
    return 0;
}

bool UYControllerKeyboardLightiningComponent::ForceSpecificActionNameColorOnKeyboard(AActor* relevantActor, FLinearColor explicitColor, EYInputActionName ActionName) {
    return false;
}

bool UYControllerKeyboardLightiningComponent::ClearSpecificAnimationKeyboardKeyOverride(AActor* relevantActor, EYInputActionName ActionName) {
    return false;
}

void UYControllerKeyboardLightiningComponent::ClearCompleteKeyboardOverride(AActor* relevantActor, int32 Handle) {
}


