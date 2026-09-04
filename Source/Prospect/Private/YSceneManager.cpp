#include "YSceneManager.h"

UYSceneManager::UYSceneManager() {
}

int32 UYSceneManager::RequestSceneWithCompleteData(UObject* objectContext, const FYSceneCompleteInitializationData& sceneCompleteData) {
    return 0;
}

int32 UYSceneManager::RequestScene(UObject* objectContext, const FYSceneRuntimeInitializationData& sceneRuntimeInitializationData) {
    return 0;
}

bool UYSceneManager::RemoveSceneByRow(UObject* objectContext, FDataTableRowHandle rowHandle) {
    return false;
}

bool UYSceneManager::RegisterSceneState(UObject* objectContext, EYSceneState State, bool ForceRefresh) {
    return false;
}

bool UYSceneManager::RegisterRuntimeData(UObject* objectContext, const FYSceneRuntimeData& newData, bool updateActiveScenes) {
    return false;
}

bool UYSceneManager::IsSceneActiveByRowHandle(UObject* objectContext, FDataTableRowHandle sceneRowHandle) {
    return false;
}

bool UYSceneManager::IsSceneActive(AYScene* Scene) {
    return false;
}

bool UYSceneManager::IsAnySceneActive() {
    return false;
}

EYSceneState UYSceneManager::GetActiveSceneState(const UObject* objectContext) {
    return EYSceneState::None;
}

AYScene* UYSceneManager::GetActiveScene() {
    return NULL;
}


