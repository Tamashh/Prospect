#include "YInventoryDragAndDropPayload.h"

UYInventoryDragAndDropPayload::UYInventoryDragAndDropPayload() {
    this->m_draggedItemSlot = EYPlayerSetType::None;
    this->m_dropAmount = false;
    this->m_amountToDrop = 0;
    this->m_itemImprovementScreenSlotType = EYItemImprovementScreenSlotType::Invalid;
    this->m_inventoryId = -1;
    this->m_shouldCreateNewItem = false;
}


