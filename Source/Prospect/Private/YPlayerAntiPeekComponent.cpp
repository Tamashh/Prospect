#include "YPlayerAntiPeekComponent.h"

UYPlayerAntiPeekComponent::UYPlayerAntiPeekComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerCharacter = NULL;
}

void UYPlayerAntiPeekComponent::HandleOnMeshViewStateChanged(EYMeshViewState newViewState) {
}


