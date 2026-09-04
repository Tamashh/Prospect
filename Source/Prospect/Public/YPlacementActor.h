#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YPlacementActor.generated.h"

UCLASS(Blueprintable)
class AYPlacementActor : public AActor {
    GENERATED_BODY()
public:
    AYPlacementActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlacementSize(float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsAvailable(bool isAvailable);
    
};

