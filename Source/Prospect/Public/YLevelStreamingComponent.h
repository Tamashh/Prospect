#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YLevelStreamingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYLevelStreamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYLevelStreamingComponent(const FObjectInitializer& ObjectInitializer);

};

