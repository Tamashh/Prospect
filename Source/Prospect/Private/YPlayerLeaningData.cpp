#include "YPlayerLeaningData.h"

FYPlayerLeaningData::FYPlayerLeaningData() {
    this->m_leanAngleFirstPerson = 0.0f;
    this->m_leanAngleThirdPerson = 0.0f;
    this->m_leaningTranslationFirstPerson = 0.0f;
    this->m_leaningTranslationThirdPerson = 0.0f;
    this->m_leaningMaxAngleFirstPerson = 0.0f;
    this->m_leaningMaxAngleThirdPerson = 0.0f;
    this->m_isLeaning = false;
}

