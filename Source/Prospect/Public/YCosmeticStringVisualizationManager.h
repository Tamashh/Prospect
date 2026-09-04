#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EYStringVisualizationType.h"
#include "YCosmeticStringVisualizationManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROSPECT_API AYCosmeticStringVisualizationManager : public AActor {
    GENERATED_BODY()
public:
    AYCosmeticStringVisualizationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool CreateStringVisualization(UObject* objectContext, const FString& stringToVisualize, int32 IterationCount, float iterationDelay, EYStringVisualizationType Type, int32& Handle);
    
};

