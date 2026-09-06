#pragma once
#include "CoreMinimal.h"
#include "Engine/BlockingVolume.h"
#include "YFlyingNavMeshBlockingVolume.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYFlyingNavMeshBlockingVolume : public ABlockingVolume {
    GENERATED_BODY()
public:
    AYFlyingNavMeshBlockingVolume(const FObjectInitializer& ObjectInitializer);

};
