#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "Misc/Guid.h"
#include "Engine/DataTable.h"
#include "EYAIState.h"
#include "EYGameplayAttribute.h"
#include "YAISenseTuningRow.h"
#include "YAIPerceptionComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
    UYAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSenseTuningRowToDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetSenseTuningRowHandle(FDataTableRowHandle senseRowHandle);

private:
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnGPAModifierChangedCallback(EYGameplayAttribute Attribute, bool added, const FGuid& Guid);

    UFUNCTION(BlueprintCallable)
    void OnAIStateChanged(EYAIState PreviousState, EYAIState currentState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSenseTuningRowBP(FYAISenseTuningRow& senseRow);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentSenseTuningRowName() const;
    
};

