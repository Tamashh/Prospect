#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYAISenseType.h"
#include "YAISenseHelperFunctions.generated.h"

UCLASS(Blueprintable)
class UYAISenseHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAISenseHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static bool IsSensePrioritySmallerThan(const EYAISenseType& Left, const EYAISenseType& Right);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSensePrioritySmallerOrEqualThan(const EYAISenseType& Left, const EYAISenseType& Right);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSensePriorityGreaterThan(const EYAISenseType& Left, const EYAISenseType& Right);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSensePriorityGreaterOrEqualThan(const EYAISenseType& Left, const EYAISenseType& Right);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSensePriorityEqualTo(const EYAISenseType& Left, const EYAISenseType& Right);
    
};

