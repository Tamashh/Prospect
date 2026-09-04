#include "YTextBlock.h"

UYTextBlock::UYTextBlock() {
    this->m_normalTextBlockStyleAsset = NULL;
    this->m_hoveredTextBlockStyleAsset = NULL;
    this->m_overrideColorAndOpacity = false;
    this->m_isChildOfButton = false;
}

void UYTextBlock::HandleUnhovered() {
}

void UYTextBlock::HandleHovered() {
}


