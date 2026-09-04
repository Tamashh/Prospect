#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "YAIAudio.h"
#include "YAITuningRow.h"
#include "YProspectAIExternalFunctions.generated.h"

class AAIController;
class AActor;
class AYAICharacter;
class AYAIController;
class UYPersistentDataAISquad;

UCLASS(Blueprintable)
class UYProspectAIExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYProspectAIExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static void UnregisterActorFromAIPerceptionSystem(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToBugItGoString(const FVector& vectorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAIControlled(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static AYAIController* GetYAIController(AActor* contextAxtor);
    
    UFUNCTION(BlueprintCallable)
    static AYAICharacter* GetYAICharacter(AActor* contextAxtor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBlackboardState(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBehaviorInfoString(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveTreesInfo(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveTaskInfo(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindAITuningRowFromActor(AActor* Actor, FYAITuningRow& tuningRow, const FString& Context);
    
    UFUNCTION(BlueprintCallable)
    static void FindAIAudioDataFromActor(AActor* aiContextActor, FYAIAudio& audioData);
    
    UFUNCTION(BlueprintCallable)
    static bool ChangeAggroOnPersistentAIData(UYPersistentDataAISquad* persistentSquadData, AActor* TargetActor, float aggroToAdd, const FString& contextString);
    
};

