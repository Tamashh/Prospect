#include "FlyingNavigationData.h"

AFlyingNavigationData::AFlyingNavigationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableDrawing = true;
    this->MaxDetailSize = 256.0;
    this->bMultithreaded = true;
    this->ThreadSubdivisions = EThreadSubdivisions::One;
    this->MaxThreads = 15;
    this->bUseAgentRadius = false;
    this->bUseExclusiveBounds = false;
    this->bUsePreciseExclusiveBounds = false;
    this->bBuildOnBeginPlay = false;
    this->bDrawOctreeNodes = false;
    this->bDrawOctreeSubNodes = true;
    this->bDrawOnlyOverlappedSubNodes = true;
    this->bColourByConnected = true;
    this->NodeMargin = 0.0f;
    this->WireThickness = 0.200000003f;
    this->bDrawNeighbourConnections = false;
    this->bDrawSimplifiedConnections = true;
    this->NodeCentreRadius = 100.0f;
}

void AFlyingNavigationData::StopRebuild() {
}

void AFlyingNavigationData::RebuildNavigationData() {
}

void AFlyingNavigationData::RebuildFlyingNavigation(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

bool AFlyingNavigationData::OctreeRaycast(const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation) const {
    return false;
}

void AFlyingNavigationData::LogMemoryUsageCompact() {
}

void AFlyingNavigationData::LogMemoryUsage() {
}

bool AFlyingNavigationData::IsNavigationDataBuilt() const {
    return false;
}

float AFlyingNavigationData::CurrentlyBuiltVoxelSize() const {
    return 0.0f;
}

void AFlyingNavigationData::CompactMemory() {
}


