#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "YItemMeshVisualization.h"
#include "YItemMeshVisualizationOverride.h"
#include "YItemVisualizationFunctions.generated.h"

class UObject;

UCLASS(Blueprintable)
class UYItemVisualizationFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYItemVisualizationFunctions();

    UFUNCTION(BlueprintCallable)
    static bool RetrieveVisualizationDataForItem(const FDataTableRowHandle& rowHandle, FYItemMeshVisualization& itemMeshVisualizationOut, FYItemMeshVisualizationOverride& itemMeshVisualizationOverrideOut);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool CreateRowHandle(const UObject* WorldContext, const FName& entityToVisualizeId, const FString& callerContext, FDataTableRowHandle& outRowHandle);
    
};

