#include "YPlayerInteraction.h"

FYPlayerInteraction::FYPlayerInteraction() {
    this->m_interactiveActor = NULL;
    this->m_objectInteractionComponent = NULL;
    this->m_canBeActive = false;
    this->m_isActive = false;
    this->m_isBlockedDueExclusivePickUp = false;
    this->m_isBlockedDueToWeightLimit = false;
    this->m_isPickupEmpty = false;
    this->m_isCompleted = false;
    this->m_currentInteractionStartTimestamp = 0.0f;
}

