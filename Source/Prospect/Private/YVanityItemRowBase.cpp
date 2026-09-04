#include "YVanityItemRowBase.h"

FYVanityItemRowBase::FYVanityItemRowBase() {
    this->m_vanityType = EYVanityType::None;
    this->m_requireOwnedItemStatus = false;
    this->m_isReadyToBeReleased = false;
    this->m_hiddenForCustomization = false;
    this->m_sortPriority = 0;
    this->m_shortBackendId = 0;
}

