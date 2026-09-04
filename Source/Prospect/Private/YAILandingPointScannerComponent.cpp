#include "YAILandingPointScannerComponent.h"

UYAILandingPointScannerComponent::UYAILandingPointScannerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_navigationData = NULL;
    this->m_filterClass = NULL;
    this->m_landingPointRadius = 200.0f;
    this->m_searchRadius = 400.0f;
    this->m_numberOfPointsToCheckInCircle = 4;
    this->m_debugDraw = false;
}

bool UYAILandingPointScannerComponent::FindLandingPointUnderLocation(const FVector& Location, FVector& outLandingLocation, float zExtent) {
    return false;
}

int32 UYAILandingPointScannerComponent::FindLandingPoints(const FVector& fromLocation, TArray<FVector>& outLocations) {
    return 0;
}


