#pragma once
#include "CoreMinimal.h"
#include "Components/BrushComponent.h"
#include "YFlyingNavMeshBlockingBrushComp.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYFlyingNavMeshBlockingBrushComp : public UBrushComponent {
    GENERATED_BODY()
public:
    UYFlyingNavMeshBlockingBrushComp(const FObjectInitializer& ObjectInitializer);

};
