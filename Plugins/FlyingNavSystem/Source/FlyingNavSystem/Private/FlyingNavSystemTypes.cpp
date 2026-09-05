#include "FlyingNavSystemTypes.h"

// Prospect's FlyingNavSystem 1.0.12 binary uses this value for an invalid node link.
const FSVOLink FSVOLink::NULL_LINK(0x10000001u);

FSVONode::FSVONode()
    : MortonCode(0)
    , FirstChild(FSVOLink::NULL_LINK)
    , Parent(FSVOLink::NULL_LINK)
    , bHasChildren(false)
{
    for (FSVOLink& Neighbour : Neighbours)
    {
        Neighbour = FSVOLink::NULL_LINK;
    }
}

FSVOLeafNode::FSVOLeafNode()
    : VoxelGrid(0)
    , Parent(FSVOLink::NULL_LINK)
{
}

FSVOData::FSVOData()
    : Bounds(ForceInit)
    , Centre(FVector::ZeroVector)
    , SideLength(0.0f)
    , SubNodeSideLength(0.0f)
    , NumNodeLayers(2)
    , NumConnectedComponents(0)
    , AgentRadius(0.0f)
    , bValid(false)
{
    NativeStateBeforeBounds[0] = 0;
    NativeStateBeforeBounds[1] = 0;
}

void FSVOData::Clear()
{
    LeafLayer.Empty();
    Layers.Empty();
    NodeComponent.Empty();
    TempNodes.Empty();
    bValid = false;
}

FArchive& operator<<(FArchive& Ar, FSVOLink& SVOLink)
{
    Ar << SVOLink.Link;
    return Ar;
}

FArchive& operator<<(FArchive& Ar, FSVONode& Node)
{
    Ar << Node.bHasChildren;
    if (Node.bHasChildren)
    {
        Ar << Node.FirstChild;
    }

    Ar << Node.Parent;
    for (FSVOLink& Neighbour : Node.Neighbours)
    {
        Ar << Neighbour;
    }
    Ar << Node.MortonCode;
    return Ar;
}

FArchive& operator<<(FArchive& Ar, FSVOLeafNode& LeafNode)
{
    Ar << LeafNode.VoxelGrid;
    Ar << LeafNode.Parent;
    return Ar;
}

FArchive& operator<<(FArchive& Ar, FSVOLayer& Layer)
{
    Ar << Layer.Nodes;
    return Ar;
}

FArchive& operator<<(FArchive& Ar, FSVOData& Data)
{
    Ar << Data.LeafLayer;
    Ar << Data.Layers;
    Ar << Data.NodeComponent;
    Ar << Data.Bounds;
    Ar << Data.Centre;
    Ar << Data.SideLength;
    Ar << Data.SubNodeSideLength;
    Ar << Data.NumNodeLayers;
    Ar << Data.NumConnectedComponents;
    Ar << Data.AgentRadius;

    if (Ar.IsLoading())
    {
        if (Data.Layers.Num() > 0 && Data.Bounds.IsValid && Data.SubNodeSideLength >= 1.0f)
        {
            Data.bValid = true;
        }
        else
        {
            Data.Clear();
        }
    }

    return Ar;
}

static_assert(sizeof(FSVOLink) == 0x4, "FSVOLink must match Prospect's serialized layout");
static_assert(sizeof(FSVONode) == 0x30, "FSVONode must match Prospect's serialized layout");
static_assert(sizeof(FSVOLeafNode) == 0x10, "FSVOLeafNode must match Prospect's serialized layout");
static_assert(sizeof(FSVOLayer) == 0x10, "FSVOLayer must match Prospect's serialized layout");
static_assert(sizeof(FSVOData) == 0x120, "FSVOData must match Prospect's native layout");
static_assert(STRUCT_OFFSET(FSVONode, MortonCode) == 0x0, "FSVONode MortonCode offset mismatch");
static_assert(STRUCT_OFFSET(FSVONode, FirstChild) == 0x8, "FSVONode FirstChild offset mismatch");
static_assert(STRUCT_OFFSET(FSVONode, Parent) == 0xC, "FSVONode Parent offset mismatch");
static_assert(STRUCT_OFFSET(FSVONode, Neighbours) == 0x10, "FSVONode Neighbours offset mismatch");
static_assert(STRUCT_OFFSET(FSVONode, bHasChildren) == 0x28, "FSVONode bHasChildren offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, LeafLayer) == 0x10, "FSVOData LeafLayer offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, Layers) == 0x20, "FSVOData Layers offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, NodeComponent) == 0x30, "FSVOData NodeComponent offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, TempNodes) == 0x80, "FSVOData TempNodes offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, Bounds) == 0xE0, "FSVOData Bounds offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, Centre) == 0xFC, "FSVOData Centre offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, SubNodeSideLength) == 0x10C, "FSVOData SubNodeSideLength offset mismatch");
static_assert(STRUCT_OFFSET(FSVOData, bValid) == 0x11C, "FSVOData bValid offset mismatch");
