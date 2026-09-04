#include "YStaticMeshComponentFOV.h"

UYStaticMeshComponentFOV::UYStaticMeshComponentFOV(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultFOV = 80.0f;
    this->m_lerpFOVSpeed = 15.0f;
    this->m_desiredFOV = 80.0f;
    this->m_currentFOV = 80.0f;
    this->m_useCustomFOV = true;
}

FMatrix UYStaticMeshComponentFOV::BP_GetRenderMatrix() const {
    return FMatrix{};
}


