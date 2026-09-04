#include "YScopeTuningRow.h"

FYScopeTuningRow::FYScopeTuningRow() {
    this->m_scopeType = EYScopeType::None;
    this->ShouldCreateGlint = false;
    this->m_shouldReticleTrackSocket = false;
    this->m_disableVisionModificationOnTargeting = false;
    this->m_shootAtCenterWhenADS = false;
}

