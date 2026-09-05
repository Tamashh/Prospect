#include "FlyingNavigationData.h"

namespace
{
constexpr uint32 CurrentFlyingNavigationDataVersion = 2;
}

AFlyingNavigationData::AFlyingNavigationData(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
    , SVOData(MakeShared<FSVOData, ESPMode::ThreadSafe>())
    , BuildingSVOData(MakeShared<FSVOData, ESPMode::ThreadSafe>())
    , SerializationVersion(CurrentFlyingNavigationDataVersion)
{
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

void AFlyingNavigationData::Serialize(FArchive& Ar)
{
    Super::Serialize(Ar);

    Ar << SerializationVersion;

    const int64 DataStart = Ar.Tell();
    uint32 SerializedDataSize = 0;
    Ar << SerializedDataSize;

    if (Ar.IsLoading() && SerializationVersion < CurrentFlyingNavigationDataVersion)
    {
        SerializationVersion = CurrentFlyingNavigationDataVersion;
        Ar.Seek(DataStart + SerializedDataSize);
        return;
    }

    Ar << SVOData.Get();

    if (Ar.IsSaving())
    {
        const int64 DataEnd = Ar.Tell();
        const int64 DataSize = DataEnd - DataStart;
        check(DataSize >= 0 && DataSize <= MAX_uint32);
        SerializedDataSize = static_cast<uint32>(DataSize);
        Ar.Seek(DataStart);
        Ar << SerializedDataSize;
        Ar.Seek(DataEnd);
    }
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
    return SVOData->bValid;
}

float AFlyingNavigationData::CurrentlyBuiltVoxelSize() const {
    return SVOData->bValid ? SVOData->SubNodeSideLength : 0.0f;
}

void AFlyingNavigationData::CompactMemory() {
}

FSVOData& AFlyingNavigationData::GetSVOData()
{
    return SVOData.Get();
}

const FSVOData& AFlyingNavigationData::GetSVOData() const
{
    return SVOData.Get();
}

#if WITH_EDITORONLY_DATA
static_assert(sizeof(AFlyingNavigationData) == 0x6B0,
    "AFlyingNavigationData must retain Prospect's editor native class size");
#else
static_assert(sizeof(AFlyingNavigationData) == 0x600,
    "AFlyingNavigationData must retain Prospect's shipping native class size");
#endif


