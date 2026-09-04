#include "YWidget_Crosshair.h"

UYWidget_Crosshair::UYWidget_Crosshair() {
    this->m_leftCrosshairImage = NULL;
    this->m_rightCrosshairImage = NULL;
    this->m_topCrosshairImage = NULL;
    this->m_bottomCrosshairImage = NULL;
    this->m_spreadCrosshairImage = NULL;
    this->m_sprintingCrosshairImage = NULL;
    this->m_playerWeaponComponent = NULL;
    this->m_crosshairBaseDistance = 12.0f;
}

void UYWidget_Crosshair::OnDealDamage(const FYDealtDamageData& Data) {
}



