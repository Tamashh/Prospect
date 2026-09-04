#include "YInsurancePayoutPackage.h"

FYInsurancePayoutPackage::FYInsurancePayoutPackage() {
    this->m_processingSeenByUser = false;
    this->m_seenByUser = false;
    this->m_softCurrency = 0;
    this->m_atLeastOneVoidedByOthers = false;
    this->m_atLeastOneVoidedBySquad = false;
}

