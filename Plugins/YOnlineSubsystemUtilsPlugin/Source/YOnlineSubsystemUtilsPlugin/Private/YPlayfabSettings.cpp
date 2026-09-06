#include "YPlayfabSettings.h"

UYPlayfabSettings::UYPlayfabSettings() {
    this->m_enabled = false;
    this->m_playfabEnvironment = EYPlayfabEnvironment::Staging;
    this->m_playfabLoginType = EYPlayfabLoginType::Custom;
}


