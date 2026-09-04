#include "YBTTask_PlayAnimation.h"

UYBTTask_PlayAnimation::UYBTTask_PlayAnimation() {
    this->m_characterAIOwner = NULL;
    this->m_animInstance = NULL;
    this->m_animationMontage = NULL;
    this->m_taskFinishCondition = EYAnimTaskFinishCondition::MontageEnds;
    this->m_expectedValueAfterChange = false;
    this->m_timeBeforeMontageEnds = 0.400000006f;
}

void UYBTTask_PlayAnimation::OnMontageEndedOrBlendingOut(UAnimMontage* montageEnded, bool interrupted) {
}


void UYBTTask_PlayAnimation::FinishTaskDueTimer() {
}



