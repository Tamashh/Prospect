#include "YPlayerMovementData.h"

FYPlayerMovementData::FYPlayerMovementData() {
    this->m_isSprinting = false;
    this->m_isCrouching = false;
    this->m_isSliding = false;
    this->m_isProning = false;
    this->m_isFalling = false;
    this->m_isIdle = false;
    this->m_isJumping = false;
    this->m_doJump = false;
    this->m_jumpTime = 0.0f;
    this->m_speed = 0.0f;
    this->m_deltaSpeed = 0.0f;
    this->m_jumpSpeedZ = 0.0f;
}

