#include "DA_Escape.h"

UDA_Escape::UDA_Escape() {
    this->m_escapeTime = 0.0f;
    this->m_escapeLocations = 0;
    this->m_escapeShipSK = NULL;
    this->m_flyingAnim = NULL;
    this->m_hoverAnim = NULL;
    this->m_landedAnim = NULL;
    this->m_takingOffAnim = NULL;
    this->m_landingPauzeTime = 0.0f;
    this->m_landingTime = 0.0f;
    this->m_landedTime = 0.0f;
    this->m_departureAlarmTime = 0.0f;
    this->m_escapeConsoleSM = NULL;
    this->m_consoleCooldownTime = 0.0f;
}


