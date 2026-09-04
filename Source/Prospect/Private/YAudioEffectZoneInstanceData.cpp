#include "YAudioEffectZoneInstanceData.h"

FYAudioEffectZoneInstanceData::FYAudioEffectZoneInstanceData() {
    this->m_linkedPlayerStateActive = false;
    this->m_linkedMovementComponentMoving = false;
    this->m_previousFrameActorYaw = 0.0f;
    this->m_isRotating = false;
    this->m_currentPlayerWalkStateValue = 0.0f;
    this->m_currentStartPlayerWalkStateValue = 0.0f;
    this->m_targetPlayerWalkStateValue = 0.0f;
    this->m_currentPlayerWalkInterpolationTime = 0.0f;
    this->m_lastMovedTimestamp = 0.0f;
    this->m_lastRotatedTimestamp = 0.0f;
}

