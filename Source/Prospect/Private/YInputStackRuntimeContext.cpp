#include "YInputStackRuntimeContext.h"

FYInputStackRuntimeContext::FYInputStackRuntimeContext() {
    this->m_widget = NULL;
    this->m_uiOnly = false;
    this->m_showCursor = false;
    this->m_isActive = false;
    this->m_needToBeForcedClosed = false;
}

