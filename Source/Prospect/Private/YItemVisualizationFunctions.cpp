#include "YItemVisualizationFunctions.h"

UYItemVisualizationFunctions::UYItemVisualizationFunctions() {
}

bool UYItemVisualizationFunctions::RetrieveVisualizationDataForItem(const FDataTableRowHandle& rowHandle, FYItemMeshVisualization& itemMeshVisualizationOut, FYItemMeshVisualizationOverride& itemMeshVisualizationOverrideOut) {
    return false;
}

bool UYItemVisualizationFunctions::CreateRowHandle(const UObject* WorldContext, const FName& entityToVisualizeId, const FString& callerContext, FDataTableRowHandle& outRowHandle) {
    return false;
}


