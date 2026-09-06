#include "YAILandingPointScannerComponent.h"

UYAILandingPointScannerComponent::UYAILandingPointScannerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_autoDetectNavigationData = true;
    this->m_navigationData = NULL;
    this->m_filterClass = NULL;
    this->m_landingPointRadius = 200.0f;
    this->m_searchRadius = 550.0f;
    this->m_numberOfPointsToCheckInCircle = 8;
}

bool UYAILandingPointScannerComponent::FindLandingPointUnderLocation(const FVector& Location, FVector& outLandingLocation, float zExtent, bool DebugDraw) {
    return false;
}

int32 UYAILandingPointScannerComponent::FindLandingPointsByOffsets(const FVector& fromLocation, const TArray<FVector2D>& Offsets, const FRotator& OffsetRotation, int32 searchLimit, TArray<FVector>& outLandingPointLocations, bool DebugDraw) {
    return 0;
}


