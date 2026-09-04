#include "YControllerDropComponent.h"

UYControllerDropComponent::UYControllerDropComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYControllerDropComponent* UYControllerDropComponent::FindDropComponent(AActor* actorContext) {
    return NULL;
}

bool UYControllerDropComponent::FindDragStateData(AActor* actorContext, FYDragStateData& outData) {
    return false;
}

void UYControllerDropComponent::EnableDragging(AActor* actorContext, UDragDropOperation* Payload) {
}

void UYControllerDropComponent::DisableDragging(AActor* actorContext) {
}


