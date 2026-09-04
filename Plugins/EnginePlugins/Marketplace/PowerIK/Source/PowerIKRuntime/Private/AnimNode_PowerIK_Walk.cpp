#include "AnimNode_PowerIK_Walk.h"

FAnimNode_PowerIK_Walk::FAnimNode_PowerIK_Walk() {
    this->RootRotationMultiplier = 0.0f;
    this->StepMaxReachDistance = 0.0f;
    this->StepDurationMultiplier = 0.0f;
    this->StepHeightMultiplier = 0.0f;
    this->StepHeightCurve = NULL;
    this->StepSpeedCurve = NULL;
    this->teleportDistance = 0.0f;
    this->PrintTeleportWarning = false;
    this->CollisionChannel = ECC_WorldStatic;
    this->TraceComplex = false;
    this->MaxSquashIterations = 0;
    this->MaxStretchIterations = 0;
    this->MaxFinalIterations = 0;
    this->AllowBoneTranslation = false;
    this->SolverAlpha = 0.0f;
    this->DebugDrawSize = 0.0f;
}

