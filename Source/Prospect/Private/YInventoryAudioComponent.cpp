#include "YInventoryAudioComponent.h"

UYInventoryAudioComponent::UYInventoryAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYInventoryAudioComponent::EvaluateStashItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item) {
}

void UYInventoryAudioComponent::EvaluateModEquippedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& device, const FYModEntry& mod) {
}

void UYInventoryAudioComponent::EvaluateItemSwappedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType originSetType, EYPlayerSetType targetSetType) {
}

void UYInventoryAudioComponent::EvaluateItemMovedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType originSetType, EYPlayerSetType targetSetType) {
}

void UYInventoryAudioComponent::EvaluateItemDroppedCallback(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType) {
}

void UYInventoryAudioComponent::EvaluateItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}



