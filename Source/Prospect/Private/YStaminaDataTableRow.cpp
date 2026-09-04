#include "YStaminaDataTableRow.h"

FYStaminaDataTableRow::FYStaminaDataTableRow() {
    this->m_maxStamina = 0.0f;
    this->m_regenerationRate = 0.0f;
    this->m_regenerationGrowthCurve = NULL;
    this->m_regenerationDelay = 0.0f;
    this->m_jumpConsumption = 0.0f;
    this->m_jumpNoStaminaScalar = 0.0f;
    this->m_sprintConsumptionRate = 0.0f;
    this->m_sprintDashConsumptionRate = 0.0f;
    this->m_sprintMinStamina = 0.0f;
    this->m_sprintDashMinStamina = 0.0f;
    this->m_slideConsumptionRate = 0.0f;
    this->m_slideMinStamina = 0.0f;
    this->m_climbingInstantConsumption = 0.0f;
    this->m_climbingDegenerationRate = 0.0f;
    this->m_allowMeleeWithoutStamina = false;
    this->m_allowMeleeHeavyWithoutStamina = false;
    this->m_StaminaReducedOnTakingHit = 0.0f;
}

