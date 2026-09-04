#include "YAITuningBuffAlliesTuning.h"

FYAITuningBuffAlliesTuning::FYAITuningBuffAlliesTuning() {
    this->m_buffCooldown = 0.0f;
    this->m_buffRadius = 0.0f;
    this->m_buffClasses = NULL;
    this->m_buffExcludeSelf = false;
    this->m_buffInterrupDamage = 0.0f;
    this->m_buffInterrupTime = 0.0f;
}

