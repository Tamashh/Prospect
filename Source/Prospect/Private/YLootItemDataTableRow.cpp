#include "YLootItemDataTableRow.h"

FYLootItemDataTableRow::FYLootItemDataTableRow() {
    this->m_type = EYPickupType::None;
    this->m_disableAfterInteractionCompleted = false;
    this->m_showInteractionWidget = false;
    this->m_showNotificationMessage = false;
    this->m_displayItemAmount = false;
    this->m_showActorUIComponent = false;
    this->m_blockMovementWhileInteracting = false;
}

