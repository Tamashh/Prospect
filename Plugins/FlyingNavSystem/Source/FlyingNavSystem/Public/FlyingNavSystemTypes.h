#pragma once

#include "CoreMinimal.h"

using morton_t = uint64;

struct FLYINGNAVSYSTEM_API FSVOLink
{
    uint32 Link;

    explicit FSVOLink(uint32 InLink = 0)
        : Link(InLink)
    {
    }

    bool operator==(const FSVOLink Other) const
    {
        return Link == Other.Link;
    }

    friend FArchive& operator<<(FArchive& Ar, FSVOLink& SVOLink);
    friend uint32 GetTypeHash(const FSVOLink SVOLink)
    {
        return GetTypeHash(SVOLink.Link);
    }

    static const FSVOLink NULL_LINK;
};

struct FLYINGNAVSYSTEM_API FSVONode
{
    morton_t MortonCode;
    FSVOLink FirstChild;
    FSVOLink Parent;
    FSVOLink Neighbours[6];
    bool bHasChildren;

    FSVONode();

    friend FArchive& operator<<(FArchive& Ar, FSVONode& Node);
};

struct FLYINGNAVSYSTEM_API FSVOLeafNode
{
    uint64 VoxelGrid;
    FSVOLink Parent;

    FSVOLeafNode();

    friend FArchive& operator<<(FArchive& Ar, FSVOLeafNode& LeafNode);
};

struct FLYINGNAVSYSTEM_API FSVOLayer
{
    TArray<FSVONode> Nodes;

    friend FArchive& operator<<(FArchive& Ar, FSVOLayer& Layer);
};

using FSVOLeafLayer = TArray<FSVOLeafNode>;

struct FLYINGNAVSYSTEM_API FSVOData : TSharedFromThis<FSVOData, ESPMode::ThreadSafe>
{
    FSVOLeafLayer LeafLayer;
    TArray<FSVOLayer> Layers;
    TMap<FSVOLink, int32> NodeComponent;
    mutable TMap<FSVOLink, FVector> TempNodes;
    uint64 NativeStateBeforeBounds[2];
    FBox Bounds;
    FVector Centre;
    float SideLength;
    float SubNodeSideLength;
    int32 NumNodeLayers;
    int32 NumConnectedComponents;
    float AgentRadius;
    bool bValid;

    FSVOData();

    void Clear();

    friend FArchive& operator<<(FArchive& Ar, FSVOData& Data);
};
