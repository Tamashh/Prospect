#include "YUpdateBodyPartRequestData.h"

FYUpdateBodyPartRequestData::FYUpdateBodyPartRequestData() {
    this->m_materialIndex = 0;
    this->m_requestType = EYCharacterItemColumnType::Invalid;
    this->m_forceIgnoreBackendDebug = false;
    this->m_sourceOfChange = EYCustomizationPreviewScreen::None;
}

