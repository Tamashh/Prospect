#include "YRebindableInputAction.h"

FYRebindableInputAction::FYRebindableInputAction() {
    this->m_keyType = EYInputKeyType::ActionKey;
    this->m_isRebindable = false;
    this->m_isRequired = false;
    this->m_inputBindingCategory = EYInputBindingCategory::MatchGeneral;
}

