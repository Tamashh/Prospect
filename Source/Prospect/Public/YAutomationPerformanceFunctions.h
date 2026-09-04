#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "YElasticsearchData.h"
#include "YAutomationPerformanceFunctions.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYAutomationPerformanceFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAutomationPerformanceFunctions();

    UFUNCTION(BlueprintCallable)
    static void AddSystemData(UPARAM(Ref) FYElasticsearchData& Data, UObject* contextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddSceneData(UPARAM(Ref) FYElasticsearchData& Data, UObject* contextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameData(UPARAM(Ref) FYElasticsearchData& Data, UObject* contextObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddAllMiscData(UPARAM(Ref) FYElasticsearchData& Data, UObject* contextObject);
    
};

