#include "YWidget_ItemComponentStats.h"

UYWidget_ItemComponentStats::UYWidget_ItemComponentStats() {
    this->m_detailStatisticsEnabled = false;
    this->m_activeBaseStatsWidget = NULL;
    this->m_canvasPanelStats = NULL;
    this->m_canvasPanelDetailStats = NULL;
    this->m_simpleStatsButton = NULL;
    this->m_detailStatisticsButton = NULL;
    this->m_statsState = EYItemStatsState::Basic;
}

void UYWidget_ItemComponentStats::SetStatsVisualizationState(EYItemStatsState State) {
}

void UYWidget_ItemComponentStats::OnFinishedAsyncloadingItemDisplay(FDataTableRowHandle rowHandle) {
}


