#include "YCondition.h"

UYCondition::UYCondition() {
    this->m_invert = false;
}

bool UYCondition::EvaluateInternal_Implementation(const UObject* Context) const {
    return false;
}


