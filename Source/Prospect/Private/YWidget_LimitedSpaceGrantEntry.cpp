#include "YWidget_LimitedSpaceGrantEntry.h"

UYWidget_LimitedSpaceGrantEntry::UYWidget_LimitedSpaceGrantEntry() {
    this->m_maxSpace = 10;
    this->m_spaceUsedByBigEntry = 4;
    this->m_spaceUsedBySmallEntry = 1;
    this->m_cachedNumGrantEntries = 0;
    this->m_maxIndexAllowedForBigEntry = -1;
}


