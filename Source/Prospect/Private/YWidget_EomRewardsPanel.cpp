#include "YWidget_EomRewardsPanel.h"

UYWidget_EomRewardsPanel::UYWidget_EomRewardsPanel() {
    this->m_mainHorizontalBox = NULL;
    this->m_expandElementsToFullWidth = false;
    this->m_displayRarityHeaders = false;
}

TArray<UYWidget_ItemContainer*> UYWidget_EomRewardsPanel::GetRewardWidgets() {
    return TArray<UYWidget_ItemContainer*>();
}



