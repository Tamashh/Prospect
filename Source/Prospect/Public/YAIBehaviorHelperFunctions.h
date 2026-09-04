#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "YAIBehaviorHelperFunctions.generated.h"

class AYAICharacter;
class UAnimMontage;

UCLASS(Blueprintable)
class UYAIBehaviorHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIBehaviorHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void GetSquadAIsInRadius(AYAICharacter* inAiCharacter, float inRadius, bool inFilterDeadAis, TArray<AYAICharacter*>& outAICharacters);
    
    UFUNCTION(BlueprintCallable)
    static void GetAIsInRadius(UObject* worlContextObject, FVector locationContext, float Radius, bool filterOutDeadAis, TArray<AYAICharacter*>& outAICharacters);
    
    UFUNCTION(BlueprintCallable)
    static FTransform ExtractRootMotion(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static void CallCustomEvent(UObject* Object, FName FunctionName);
    
};

