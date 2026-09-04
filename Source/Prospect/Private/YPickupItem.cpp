#include "YPickupItem.h"

FYPickupItem::FYPickupItem() {
    this->m_amount = 0;
    this->m_instigatedBy = NULL;
    this->m_instigatorObject = NULL;
    this->m_canBeSharedWithTeam = false;
    this->m_isPickUpByPlayerDrop = false;
    this->m_pickupWidgetOverride = NULL;
}

