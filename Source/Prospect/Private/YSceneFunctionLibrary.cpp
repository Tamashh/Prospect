#include "YSceneFunctionLibrary.h"

UYSceneFunctionLibrary::UYSceneFunctionLibrary() {
}

UYSceneManager* UYSceneFunctionLibrary::FindSceneManager(const UObject* WorldContext) {
    return NULL;
}

bool UYSceneFunctionLibrary::FindSceneDataFromRowHandle(const FDataTableRowHandle& rowHandle, FYSceneDataTableRow& outRow) {
    return false;
}

bool UYSceneFunctionLibrary::FindLastInitializationData(const UObject* WorldContext, FYSceneCompleteInitializationData& outData) {
    return false;
}

bool UYSceneFunctionLibrary::FindActiveSceneRowData(const UObject* objCtx, FYSceneDataTableRow& outData) {
    return false;
}


