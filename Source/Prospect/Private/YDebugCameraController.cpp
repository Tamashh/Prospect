#include "YDebugCameraController.h"

AYDebugCameraController::AYDebugCameraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
    this->m_minCameraSpeed = 0.0199999996f;
    this->m_minOrbitDistance = 100.0f;
    this->m_lookAtActor = NULL;
    this->m_cachedOrbitDistance = 0.0f;
}


