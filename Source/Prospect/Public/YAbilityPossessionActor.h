#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YAbilityPossessionActor.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYAbilityPossessionActor : public AActor {
    GENERATED_BODY()
public:
    AYAbilityPossessionActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPossesionStateChanged(bool newState);
    
};

