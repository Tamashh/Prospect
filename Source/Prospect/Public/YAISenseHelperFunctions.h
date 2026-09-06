#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYAISenseType.h"
#include "YAISenseHelperFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYAISenseHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAISenseHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void RemoveTargetFromAllAIs(AActor* actorToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSensePriorityGreaterOrEqualThan(const EYAISenseType& Left, const EYAISenseType& Right);
    
};

