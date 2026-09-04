#pragma once
#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "YRustlingBushComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYRustlingBushComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UYRustlingBushComponent(const FObjectInitializer& ObjectInitializer);

};

