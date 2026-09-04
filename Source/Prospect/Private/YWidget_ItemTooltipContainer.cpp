#include "YWidget_ItemTooltipContainer.h"

UYWidget_ItemTooltipContainer::UYWidget_ItemTooltipContainer() {
    this->m_headerWidget = NULL;
    this->m_descriptionWidget = NULL;
    this->m_flavorTextWidget = NULL;
    this->m_imageWidget = NULL;
    this->m_incompatibleModTextBlock = NULL;
    this->m_itemTooltipType = EYItemTooltipType::None;
}


