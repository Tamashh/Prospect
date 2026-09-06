#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "YAbilityStateInfo.h"
#include "YAIPerceptionStimuliSourceComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIPerceptionStimuliSourceComp : public UAIPerceptionStimuliSourceComponent {
    GENERATED_BODY()
public:
    UYAIPerceptionStimuliSourceComp(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void UpdatePerceptionStatus();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveActorFromPerceptionSystemAndAllAIs();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReviveStateDeactivated(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityStateChanged(const FYAbilityStateInfo& Info);
    
};

