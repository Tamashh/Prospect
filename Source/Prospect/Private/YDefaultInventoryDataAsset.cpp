#include "YDefaultInventoryDataAsset.h"

UYDefaultInventoryDataAsset::UYDefaultInventoryDataAsset() {
    this->m_bOverrideBackendInventoryInPIE = true;
    this->m_bOverrideStationBackendInventoryInPIE = false;
    this->m_defaultStashSize = 80;
    this->m_defaultBagSize = 30;
    this->m_defaultSafeSize = 10;
    this->m_defaultPlayerQuarterLevel = 1;
    this->m_addBagItems = false;
}


