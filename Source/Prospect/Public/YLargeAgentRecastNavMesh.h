#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "YLargeAgentRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYLargeAgentRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AYLargeAgentRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

