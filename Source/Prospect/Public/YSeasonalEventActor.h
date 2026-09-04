#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YSeasonalEventActor.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYSeasonalEventActor : public AActor {
    GENERATED_BODY()
public:
    AYSeasonalEventActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RerunConstructionScripts_BP();
    
};

