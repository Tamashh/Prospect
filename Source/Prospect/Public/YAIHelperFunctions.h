#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YAIAudio.h"
#include "YAITuningRow.h"
#include "YAIHelperFunctions.generated.h"

class AActor;
class AYAICharacter;
class AYAIController;

UCLASS(Blueprintable)
class UYAIHelperFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAIHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void UnregisterActorFromAIPerceptionSystem(AActor* Actor);

    UFUNCTION(BlueprintCallable)
    static bool IsAIControlled(AActor* Actor);

    UFUNCTION(BlueprintCallable)
    static AYAIController* GetYAIController(AActor* Actor);

    UFUNCTION(BlueprintCallable)
    static AYAICharacter* GetYAICharacter(AActor* Actor);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindAITuningRowFromActor(AActor* Actor, FYAITuningRow& tuningRow, const FString& Context);

    UFUNCTION(BlueprintCallable)
    static void FindAIAudioDataFromActor(AActor* Actor, FYAIAudio& audioData);

};
