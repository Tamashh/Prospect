#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "YMediumAgentRecastNavMesh.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYMediumAgentRecastNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AYMediumAgentRecastNavMesh(const FObjectInitializer& ObjectInitializer);

};

