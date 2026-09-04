#include "YPerk.h"

FYPerk::FYPerk() {
    this->m_hidePerkValueInUI = false;
    this->m_trigger = EYPerkTrigger::GameplayAttribute;
    this->m_contextType = EYGameplayContextType::Unknown;
    this->m_target = EYPerkTarget::Source;
    this->m_isElitePerk = false;
    this->m_perkDuration = 0.0f;
    this->m_refreshAttributes = false;
    this->m_resetAttributeDurationOnReTrigger = false;
}

