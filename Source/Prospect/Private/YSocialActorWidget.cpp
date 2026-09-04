#include "YSocialActorWidget.h"

UYSocialActorWidget::UYSocialActorWidget() {
    this->m_socialActor = NULL;
    this->m_isSocialActorFromLocalOwner = false;
    this->m_isSocialActorFromTeam = false;
}

FColor UYSocialActorWidget::GetPlayerTeamColor() {
    return FColor{};
}



