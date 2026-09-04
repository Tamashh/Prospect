#include "YActivityProgressActorWidget.h"

UYActivityProgressActorWidget::UYActivityProgressActorWidget() {
    this->m_statusText = NULL;
    this->m_progressBar = NULL;
}

void UYActivityProgressActorWidget::ShowProgress(float progress) {
}

void UYActivityProgressActorWidget::ShowMessage(const FText& Text) {
}

void UYActivityProgressActorWidget::OnStateUpdated_Implementation(int32 newState) {
}


