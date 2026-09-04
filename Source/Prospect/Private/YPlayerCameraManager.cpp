#include "YPlayerCameraManager.h"
#include "YPlayerCameraFoVComponent.h"

AYPlayerCameraManager::AYPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->m_shouldNeverUpdateNavigationTransform = true;
    this->DefaultModifiers.AddDefaulted(1);
    this->ViewPitchMin = -89.0f;
    const FProperty* p_ServerUpdateCameraTimeout = GetClass()->FindPropertyByName("ServerUpdateCameraTimeout");
    (*p_ServerUpdateCameraTimeout->ContainerPtrToValuePtr<float>(this)) = 0.0f;
    this->m_fovComponent = CreateDefaultSubobject<UYPlayerCameraFoVComponent>(TEXT("YPlayerCameraFoVComponent"));
    this->m_currentViewTarget = NULL;
    this->m_runCollisionCheck = false;
}

void AYPlayerCameraManager::RemoveViewTargetLock() {
}


