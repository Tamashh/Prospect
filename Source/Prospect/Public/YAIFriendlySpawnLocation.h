#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YAIFriendlySpawnLocation.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYAIFriendlySpawnLocation : public AActor {
    GENERATED_BODY()
public:
    AYAIFriendlySpawnLocation(const FObjectInitializer& ObjectInitializer);

};
