#include "YSceneDataTableRow.h"

FYSceneDataTableRow::FYSceneDataTableRow() {
    this->m_bpClass = NULL;
    this->m_doNotActivateNonVisibleWidget = false;
    this->m_wantTransitionStateChange = false;
    this->m_wantTransitionChangeOnClearing = false;
    this->m_hideCharacterOnTransition = false;
}

