#include "YScene.h"

AYScene::AYScene(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentState = EYSceneState::Normal;
    this->m_activeWidget = NULL;
    this->m_characterCustomizationActor = NULL;
}

bool AYScene::SetSceneState(EYSceneState State, bool ForceRefresh) {
    return false;
}

void AYScene::SetOverrideCameraActor(EYSceneState sceneState, AActor* CameraActor) {
}

void AYScene::OnRotationDeltaChanged(const FVector2D& rotationDelta) {
}

void AYScene::OnFinishedLoadingWidget() {
}

AActor* AYScene::GetCameraActor() {
    return NULL;
}

void AYScene::BP_UnInitialize_Implementation() {
}

void AYScene::BP_SceneChanged_Implementation(EYSceneState sceneState) {
}



void AYScene::BP_Initialize_Implementation(const FYSceneRuntimeInitializationData& sceneRuntimeInitializationData) {
}


