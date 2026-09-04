#include "AnimNode_PowerIK_Ground.h"

FAnimNode_PowerIK_Ground::FAnimNode_PowerIK_Ground() {
    this->FeetDeltaSmoothSpeed = 0.0f;
    this->RootRotationMultiplier = 0.0f;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.0f;
    this->DebugDrawSize = 0.0f;
}

