#include "PowerIKGroundSlope.h"

FPowerIKGroundSlope::FPowerIKGroundSlope() {
    this->MaxGroundAngle = 0.0f;
    this->MaxNormalAngularSpeed = 0.0f;
    this->OrientToGround = false;
    this->OrientToPitch = 0.0f;
    this->OrientToRoll = 0.0f;
    this->ScaleStride = false;
    this->UphillStrideScale = 0.0f;
    this->DownhillStrideScale = 0.0f;
    this->SidehillStrideScale = 0.0f;
    this->SidehillPushOuterFeet = 0.0f;
    this->Lean = false;
    this->UphillLean = 0.0f;
    this->DownhillLean = 0.0f;
    this->SidehillLean = 0.0f;
    this->CounterLean = false;
    this->UphillCounterLean = 0.0f;
    this->DownhillCounterLean = 0.0f;
    this->SidehillCounterLean = 0.0f;
    this->MoveRoot = false;
    this->UphillVertOffset = 0.0f;
    this->UphillHorizOffset = 0.0f;
    this->DownhillVertOffset = 0.0f;
    this->DownhillHorizOffset = 0.0f;
    this->SidehillHorizOffset = 0.0f;
    this->SidehillVertOffset = 0.0f;
    this->RotateFootToGround = false;
    this->PitchFootAmount = 0.0f;
    this->RollFootAmount = 0.0f;
    this->FootAngleDeltaSmoothSpeed = 0.0f;
    this->OffsetFeetPositions = false;
    this->StaticFootOffset = 0.0f;
}

