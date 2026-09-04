#include "YGeneratorRow.h"

FYGeneratorRow::FYGeneratorRow() {
    this->m_generatorType = EYPassiveGeneratorRewardType::None;
    this->m_baseGenIntervalMinutes = 0;
    this->m_baseGenRate = 0;
    this->m_baseCap = 0;
    this->m_capPerkEffector = EYTechTreeNodePerkType::None;
    this->m_genRatePerkEffector = EYTechTreeNodePerkType::None;
}

