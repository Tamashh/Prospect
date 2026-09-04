#include "ItemLockInfo.h"

FItemLockInfo::FItemLockInfo() {
    this->m_lockReason = EYCraftingUnavailableReason::None;
    this->m_level = 0;
}

