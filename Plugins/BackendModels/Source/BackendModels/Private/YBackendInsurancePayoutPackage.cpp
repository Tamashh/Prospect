#include "YBackendInsurancePayoutPackage.h"

FYBackendInsurancePayoutPackage::FYBackendInsurancePayoutPackage() {
    this->processingSeenByUser = false;
    this->seenByUser = false;
    this->softCurrency = 0;
    this->atLeastOneVoidedByOthers = false;
    this->atLeastOneVoidedBySquad = false;
}

