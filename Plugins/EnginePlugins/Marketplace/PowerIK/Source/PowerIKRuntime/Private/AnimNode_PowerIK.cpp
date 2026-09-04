#include "AnimNode_PowerIK.h"

FAnimNode_PowerIK::FAnimNode_PowerIK() {
    this->RootRotationMultiplier = 0.0f;
    this->SmoothingMaxSpeedMultiplier = 0.0f;
    this->SmoothingMaxDistanceMultiplier = 0.0f;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.0f;
    this->DebugDrawSize = 0.0f;
}

