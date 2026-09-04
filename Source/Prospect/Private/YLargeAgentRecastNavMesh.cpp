#include "YLargeAgentRecastNavMesh.h"

AYLargeAgentRecastNavMesh::AYLargeAgentRecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TileSizeUU = 1024.0f;
    this->CellSize = 32.0f;
    this->CellHeight = 32.0f;
}


