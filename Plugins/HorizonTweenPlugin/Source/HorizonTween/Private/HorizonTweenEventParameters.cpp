#include "HorizonTweenEventParameters.h"

FHorizonTweenEventParameters::FHorizonTweenEventParameters() {
    this->LerpMode = EHorizonTweenLerpMode::Lerp;
    this->PlayMode = EHorizonTweenPlayMode::Forward;
    this->NumOfLoop = 0;
    this->Duration = 0.0f;
    this->DelayInit = 0.0f;
    this->DelayLoop = 0.0f;
    this->bPauseOnTweenLoop = false;
}

