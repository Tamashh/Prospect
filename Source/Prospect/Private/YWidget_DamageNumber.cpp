#include "YWidget_DamageNumber.h"

UYWidget_DamageNumber::UYWidget_DamageNumber() {
    this->m_animateLeft = false;
    this->m_damageText = NULL;
    this->m_damageIcon = NULL;
    this->m_duration = 1.0f;
    this->m_xpDuration = 1.0f;
    this->m_distanceLocation = 1.0f;
    this->m_isHeadshot = false;
    this->m_canvasPanel = NULL;
}

void UYWidget_DamageNumber::OnRemoveWidget() {
}


