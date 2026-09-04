#include "YAutoDestroyComponent.h"

UYAutoDestroyComponent::UYAutoDestroyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYAutoDestroyComponent::OnRelatedPlayerCharacterDestroyed(AActor* actorDestroyed) {
}


