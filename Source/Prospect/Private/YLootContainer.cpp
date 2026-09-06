#include "YLootContainer.h"
#include "YStateInventoryComponent.h"

AYLootContainer::AYLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_maxInventoryWeight = 100;
    this->m_inventoryComponent = CreateDefaultSubobject<UYStateInventoryComponent>(TEXT("inventoryComponent"));
    this->m_lootContainerWidgetType = EYLootContainerWidgetType::Undefined;
    this->m_maxItemInstancesInContainer = -1;
    this->m_containerLootRollCount = 1;
}

FString AYLootContainer::ToDebugString() const {
    return TEXT("");
}

void AYLootContainer::SetItemOverride(const FYInventoryItem& Item) {
}

void AYLootContainer::SetInventoryFromLootListRoll(FDataTableRowHandle lootListRollRowHandle) {
}

void AYLootContainer::SetInventory(const FYPlayerInventory& newInventory, const FYPlayerDataSet& newSet) {
}

void AYLootContainer::OnContainerInteractionCancelled(UYControllerInventoryInteractionComponent* inventoryInteractionComponent) {
}


bool AYLootContainer::MoveItemsBack(UYStateInventoryComponent* interactingPlayerStateInventoryComponent) {
    return false;
}

int32 AYLootContainer::GetMaxItemInstancesInContainer() const {
    return 0;
}

int32 AYLootContainer::GetMaxInventoryWeight_Implementation() {
    return 0;
}

FYPlayerInventory AYLootContainer::GetInventory() const {
    return FYPlayerInventory{};
}

void AYLootContainer::CreateItemAddToLootContainer(const FDataTableRowHandle& itemRowHandle, const int32 Amount, TArray<FYInventoryItem>& outCreatedItems, const EYPlayerSetType Slot) {
}

void AYLootContainer::ClearInventory() {
}

bool AYLootContainer::CanInteractWithLootContainer_Implementation() {
    return false;
}

void AYLootContainer::AddItemToLootContainerPlayerSet(const FYInventoryItem& Item, EYPlayerSetType Slot) {
}


