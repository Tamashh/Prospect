#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YLevelFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYLevelFunctions : public UObject {
    GENERATED_BODY()
public:
    UYLevelFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void StartWorldCompositionLevelStreaming(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool IsCurrentlyLoadingLevels(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ForceYLevelStreamingBoundsInitialLoad(const UObject* WorldContext);
    
};

