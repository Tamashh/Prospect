#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "EYAIState.h"
#include "YAISenseTuningRow.h"
#include "YAIPerceptionComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UYAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSenseTuningRow(FYAISenseTuningRow senseTuningRow);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnAIStateChanged(EYAIState PreviousState, EYAIState currentState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSenseTuningRowBP(FYAISenseTuningRow& senseTuningRow);
    
};

