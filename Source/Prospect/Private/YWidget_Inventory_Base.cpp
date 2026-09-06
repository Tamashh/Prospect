#include "YWidget_Inventory_Base.h"

UYWidget_Inventory_Base::UYWidget_Inventory_Base() {
    this->m_uiInventoryInitializionType = EYUIInventoryInitializationType::NormalInitialization;
    this->m_refreshingEnabled = true;
}

void UYWidget_Inventory_Base::SetInventoryId_Implementation(int32 inventoryComponentId) {
}

void UYWidget_Inventory_Base::OnPlayerStateSetCallback(APlayerState* NewPlayerState) {
}

void UYWidget_Inventory_Base::OnPlayerSetDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent) {
}

void UYWidget_Inventory_Base::OnPlayerInventoryDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent) {
}

void UYWidget_Inventory_Base::OnInventoryStateLeft_Implementation(bool bInterrupted) {
}

void UYWidget_Inventory_Base::OnInventoryStateEntered_Implementation() {
}

void UYWidget_Inventory_Base::OnContainerInventorySetDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent) {
}

void UYWidget_Inventory_Base::OnContainerInventoryDataUpdatedCallback(UYStateInventoryComponent* inventoryComponent) {
}

bool UYWidget_Inventory_Base::IsInventoryCustomInitialized() const {
    return false;
}

UYStateInventoryComponent* UYWidget_Inventory_Base::GetRelevantStateInventoryComponent() const {
    return NULL;
}

int32 UYWidget_Inventory_Base::GetInventoryId() const {
    return 0;
}

bool UYWidget_Inventory_Base::DoesInventoryShowWeight() const {
    return false;
}

EYPlayerSetType UYWidget_Inventory_Base::BP_GetTargetSetType_Implementation(UUserWidget* InWidget) const {
    return EYPlayerSetType::None;
}

float UYWidget_Inventory_Base::BP_GetCurrentWeight_Implementation() const {
    return 0.0f;
}

float UYWidget_Inventory_Base::BP_GetCurrentMaxWeight_Implementation() const {
    return 0.0f;
}

bool UYWidget_Inventory_Base::BP_CanMoveItem_Implementation(const FYInventoryItem& inventoryItem, UUserWidget* InWidget) {
    return false;
}


