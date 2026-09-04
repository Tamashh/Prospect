#include "YWidget_Progress.h"

UYWidget_Progress::UYWidget_Progress() {
    this->m_progressBar = NULL;
    this->m_icon = NULL;
    this->m_infoText = NULL;
    this->m_progressToShow = NULL;
    this->m_hudProgressComponent = NULL;
}

void UYWidget_Progress::OnDisplayProgressRequest(UYProgressComponent* currentProgress) {
}


