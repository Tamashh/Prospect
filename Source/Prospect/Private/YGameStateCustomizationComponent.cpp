#include "YGameStateCustomizationComponent.h"

UYGameStateCustomizationComponent::UYGameStateCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYGameStateCustomizationComponent::HandleActorRegistrationForCustomizationMode(const UObject* objCtx, EYCustomizationMode Mode, AActor* Actor, EYActorStorageIntention intention) {
}

UYGameStateCustomizationComponent* UYGameStateCustomizationComponent::FindGameStateCustomizationComponentChecked(const UObject* objCtx) {
    return NULL;
}

UYGameStateCustomizationComponent* UYGameStateCustomizationComponent::FindGameStateCustomizationComponent(const UObject* objCtx) {
    return NULL;
}


