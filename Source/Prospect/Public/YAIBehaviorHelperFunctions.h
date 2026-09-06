#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "YAIBehaviorHelperFunctions.generated.h"

class AYAICharacter;

UCLASS(Blueprintable)
class UYAIBehaviorHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIBehaviorHelperFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetAIsInRadius(UObject* WorldContext, FVector locationContext, float Radius, bool filterOutDeadAis, TArray<AYAICharacter*>& outAICharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CanAIsRestInCurrentMatchPhase(UObject* WorldContext);
    
};

