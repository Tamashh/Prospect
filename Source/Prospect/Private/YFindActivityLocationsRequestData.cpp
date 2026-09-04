#include "YFindActivityLocationsRequestData.h"

FYFindActivityLocationsRequestData::FYFindActivityLocationsRequestData() {
    this->m_amount = 0;
    this->m_type = EYActivityType::None;
    this->m_minimumDistanceToPlayers = 0.0f;
    this->m_areaLinkedLocationFilter = NULL;
}

