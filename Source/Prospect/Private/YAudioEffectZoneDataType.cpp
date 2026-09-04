#include "YAudioEffectZoneDataType.h"

FYAudioEffectZoneDataType::FYAudioEffectZoneDataType() {
    this->m_effectType = EYAudioEffectZoneEffectType::Movement;
    this->m_playEffectOnLinkedActor = false;
    this->m_requiredRotationForEffectToPlay = 0.0f;
    this->m_rotationStopEffectDelayDuration = 0.0f;
    this->m_effectFadeOutTime = 0.0f;
    this->m_effectFadeOutLevel = 0.0f;
    this->m_playerWalkStateInterpolationTime = 0.0f;
    this->m_basePlayerWalkStateValue = 0.0f;
    this->m_movementStopEffectDelayDuration = 0.0f;
}

