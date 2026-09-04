#include "YControllerItemHoverComponent.h"

UYControllerItemHoverComponent::UYControllerItemHoverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentHoveredItemContainer = NULL;
}

void UYControllerItemHoverComponent::SetHoveredItemContainer(UYWidget_ItemContainer* newItemContainer) {
}

UYControllerItemHoverComponent* UYControllerItemHoverComponent::FindHoverItemComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerItemHoverComponent::ClearHoveredItemContainer(UYWidget_ItemContainer* oldItemContainer) {
}


