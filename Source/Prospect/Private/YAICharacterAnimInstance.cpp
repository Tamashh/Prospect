#include "YAICharacterAnimInstance.h"

UYAICharacterAnimInstance::UYAICharacterAnimInstance() {
    this->m_aiCharacter = NULL;
    this->m_characterState = EYAIState::Idle;
    this->m_speed = 0.0f;
    this->m_direction = 0.0f;
    this->m_isDedicatedServer = false;
    this->m_screenSize = 0.0f;
    this->m_powerIKScreenSizeTurnOn = 0.300000012f;
    this->m_powerIKScreenSizeTurnOff = 0.25f;
    this->m_powerIKAlpha = 0.0f;
    this->m_powerIKOn = false;
    this->m_hasPowerIKToken = false;
    this->m_lookAtDistance = 600.0f;
    this->m_lookAtEnabled = false;
    this->m_lookAtBlocked = false;
}


