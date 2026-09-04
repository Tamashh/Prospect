#pragma once
#include "CoreMinimal.h"
#include "YRustlingBushComponent.h"
#include "YHideableBushComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYHideableBushComponent : public UYRustlingBushComponent {
    GENERATED_BODY()
public:
    UYHideableBushComponent(const FObjectInitializer& ObjectInitializer);

};

