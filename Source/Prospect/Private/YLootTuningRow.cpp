#include "YLootTuningRow.h"

FYLootTuningRow::FYLootTuningRow() {
    this->m_serverPickUpDestructionSafeTime = 0.0f;
    this->m_pickUpInteractionTimeDefault = 0.0f;
    this->m_pickUpInteractionTimeWeapon = 0.0f;
    this->m_pickUpInteractionTimeAbility = 0.0f;
    this->m_autoPickupRadius = 0;
    this->m_navMeshRandomPointInRadiusForLootDrops = 0;
}

