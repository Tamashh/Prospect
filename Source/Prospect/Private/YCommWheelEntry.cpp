#include "YCommWheelEntry.h"

FYCommWheelEntry::FYCommWheelEntry() {
    this->m_iconTexture = NULL;
    this->m_subCommWheel = NULL;
    this->m_associatedActivity = EYActivityType::None;
    this->m_onlyVisibleIfDBNO = false;
    this->m_onlyVisibleIfInATeam = false;
    this->m_tutorialVisibility = EYCommWheelEntryTutorialSetting::Always;
    this->m_colorizeSocialActorWidgetIconByPlayerRole = false;
    this->m_minSocialActorLifeSpan = 0.0f;
    this->m_maxSocialActorLifeSpan = 0.0f;
}

