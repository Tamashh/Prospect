#include "YActivityLocationEQS.h"

AYActivityLocationEQS::AYActivityLocationEQS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->QueryTemplate = NULL;
    this->TimeLimitPerStep = -1.0f;
    this->StepToDebugDraw = 0;
    this->HighlightMode = EYEnvQueryHightlightMode::All;
    this->bDrawLabels = true;
    this->bDrawFailedItems = true;
    this->bReRunQueryOnlyOnFinishedMove = true;
    this->bShouldBeVisibleInGame = false;
    this->bTickDuringGame = false;
    this->QueryingMode = EEnvQueryRunMode::AllMatching;
}

void AYActivityLocationEQS::RunEQSQuery() {
}


