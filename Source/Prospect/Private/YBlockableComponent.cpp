#include "YBlockableComponent.h"

UYBlockableComponent::UYBlockableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isBlocked = false;
    this->m_canBlock = true;
}

void UYBlockableComponent::UnblockObject() {
}

bool UYBlockableComponent::IsBlocked() {
    return false;
}

void UYBlockableComponent::BlockObject(int32 timeToBlock) {
}


