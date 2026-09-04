#include "YWeaponFireDelayStateData.h"

FYWeaponFireDelayStateData::FYWeaponFireDelayStateData() {
    this->m_fireDelay = 0.0f;
    this->m_playerState = EYPlayerStateBlueprint::None;
    this->m_gameplayAttribute = EYGameplayAttribute::None;
}

