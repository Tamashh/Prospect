#include "YMeleeActor.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "YCameraInteractionComponent.h"
#include "YDataTableRowAssociationComponent.h"

AYMeleeActor::AYMeleeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->m_rowAssociationComponent = CreateDefaultSubobject<UYDataTableRowAssociationComponent>(TEXT("RowAssociationComponent"));
    this->m_rootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_sceneBase = CreateDefaultSubobject<USceneComponent>(TEXT("SceneBase"));
    this->m_sceneRotationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRotationComponent"));
    this->m_skeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->m_cameraInteractionComponent = CreateDefaultSubobject<UYCameraInteractionComponent>(TEXT("CameraInteractionComponent"));
    this->m_sceneBase->SetupAttachment(m_rootComponent);
    this->m_sceneRotationComponent->SetupAttachment(m_sceneBase);
    this->m_skeletalMeshComponent->SetupAttachment(m_sceneRotationComponent);
}



