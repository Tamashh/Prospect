#include "StriderMath.h"

UStriderMath::UStriderMath() {
}

float UStriderMath::WrapAngle(float Angle) {
    return 0.0f;
}

void UStriderMath::MoveTowardVector(FVector& InStart, const FVector& End, const float MaxDelta) {
}

float UStriderMath::MoveTowardAngle(float StartAngle, float EndAngle, const float MaxDelta) {
    return 0.0f;
}

float UStriderMath::MoveToward(const float Start, const float End, const float MaxDelta) {
    return 0.0f;
}

void UStriderMath::MoveComponentsToward(FVector& InStart, const FVector& End, const float MaxDelta) {
}

float UStriderMath::GetRotationRelativeToVelocity(const AActor* Actor) {
    return 0.0f;
}

int32 UStriderMath::GetNextCardinalDirection(const int32 CurrentCardinalDirection, const float RelativeDirection, const float StepDelta, const float SkipDelta) {
    return 0;
}

float UStriderMath::GetAngleDelta(const float StartAngle, const float EndAngle) {
    return 0.0f;
}

float UStriderMath::CalculateStrideScale(const float TotalSpeedScale, const float PlayRate) {
    return 0.0f;
}

float UStriderMath::CalculatePlayRate(const float TotalSpeedScale, const float PlaybackWeight, const float MinPlayRate, const float MaxPlayRate) {
    return 0.0f;
}

float UStriderMath::CalculateCircleStrafeDirectionDelta(const float LastDirection, const float Direction, const float DeltaTime) {
    return 0.0f;
}

float UStriderMath::AngleBetween(const FVector& A, const FVector& B) {
    return 0.0f;
}


