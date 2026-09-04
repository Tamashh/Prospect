#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "YAISpawnSquadLocation.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYAISpawnSquadLocation : public AActor {
    GENERATED_BODY()
public:
    AYAISpawnSquadLocation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSpawnLocationFound(FVector SpawnLocation);
    
};

