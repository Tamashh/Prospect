#include "YWidget_HitIndicator.h"

UYWidget_HitIndicator::UYWidget_HitIndicator() {
    this->m_hitOverlayImage = NULL;
    this->m_contextHitImage = NULL;
    this->m_dotProductDoNotShowDamageIndicator = 0.899999976f;
    this->m_damagingComponent = NULL;
}

void UYWidget_HitIndicator::OnOwningPlayerTakeDamage(const FYDealtDamageData& Data) {
}

void UYWidget_HitIndicator::ClearHitIndicator() {
}


void UYWidget_HitIndicator::BindDelegates() {
}


