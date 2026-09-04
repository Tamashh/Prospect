#include "YActorUIWidgetData.h"

FYActorUIWidgetData::FYActorUIWidgetData() {
    this->m_renderDistance = 0.0f;
    this->m_minRenderDistance = 0.0f;
    this->m_playAnimation = false;
    this->m_attachPlayerNameToTitle = false;
    this->m_showArrow = false;
    this->m_overrideColor = false;
    this->m_attachAmountToTitle = false;
    this->m_useOwnerTeamColor = false;
    this->m_calculateDistanceToPlayer = false;
}

